#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143268
// Address: 0x143268 - 0x143430
void sub_00143268_0x143268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143268_0x143268");
#endif

    switch (ctx->pc) {
        case 0x143328u: goto label_143328;
        case 0x1433b0u: goto label_1433b0;
        case 0x1433f0u: goto label_1433f0;
        case 0x143400u: goto label_143400;
        default: break;
    }

    ctx->pc = 0x143268u;

    // 0x143268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14326c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x143270: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x143270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x143274: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x143278: 0x8c42870c  lw          $v0, -0x78F4($v0)
    ctx->pc = 0x143278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14327c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143280: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x143280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x143284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143288: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x143288u;
    {
        const bool branch_taken_0x143288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143288u;
        // 0x14328c: 0xac608480  sw          $zero, -0x7B80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143288) {
            ctx->pc = 0x14341Cu;
            goto label_14341c;
        }
    }
    ctx->pc = 0x143290u;
    // 0x143290: 0x8c4e000c  lw          $t6, 0xC($v0)
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x143294: 0x11c00062  beqz        $t6, . + 4 + (0x62 << 2)
    ctx->pc = 0x143294u;
    {
        const bool branch_taken_0x143294 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x143298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143294u;
        // 0x143298: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143294) {
            ctx->pc = 0x143420u;
            goto label_143420;
        }
    }
    ctx->pc = 0x14329Cu;
    // 0x14329c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1432a0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1432A0u;
    {
        const bool branch_taken_0x1432a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432A0u;
        // 0x1432a4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432a0) {
            ctx->pc = 0x143420u;
            goto label_143420;
        }
    }
    ctx->pc = 0x1432A8u;
    // 0x1432a8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1432ac: 0x24470da0  addiu       $a3, $v0, 0xDA0
    ctx->pc = 0x1432acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x1432b0: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1432b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1432b4: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1432b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1432b8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1432b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1432bc: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1432bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1432c0: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1432c4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1432c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1432c8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1432c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1432cc: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1432ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1432d0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1432d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1432d4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1432d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1432d8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432dc: 0x8c62849c  lw          $v0, -0x7B64($v1)
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33849Cu));
    // 0x1432e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1432e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1432e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1432e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1432e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1432E8u;
    {
        const bool branch_taken_0x1432e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432E8u;
        // 0x1432ec: 0x240d0004  addiu       $t5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432e8) {
            ctx->pc = 0x1432F4u;
            goto label_1432f4;
        }
    }
    ctx->pc = 0x1432F0u;
    // 0x1432f0: 0xad23849c  sw          $v1, -0x7B64($t1)
    ctx->pc = 0x1432f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294935708), GPR_U32(ctx, 3));
label_1432f4:
    // 0x1432f4: 0x8d22849c  lw          $v0, -0x7B64($t1)
    ctx->pc = 0x1432f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294935708)));
    // 0x1432f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1432fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1432fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143300: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x143300u;
    {
        const bool branch_taken_0x143300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143300) {
            ctx->pc = 0x143304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143300u;
            // 0x143304: 0xad23849c  sw          $v1, -0x7B64($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 4294935708), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143308u;
            goto label_143308;
        }
    }
    ctx->pc = 0x143308u;
label_143308:
    // 0x143308: 0x3c080098  lui         $t0, 0x98
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)152 << 16));
    // 0x14330c: 0x8d2b849c  lw          $t3, -0x7B64($t1)
    ctx->pc = 0x14330cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294935708)));
    // 0x143310: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x143310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143314: 0x3508967f  ori         $t0, $t0, 0x967F
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)38527);
    // 0x143318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14331c: 0x3c0f0034  lui         $t7, 0x34
    ctx->pc = 0x14331cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)52 << 16));
    // 0x143320: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x143320u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143324: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x143324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_143328:
    // 0x143328: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x143328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14332c: 0x4b2823  subu        $a1, $v0, $t3
    ctx->pc = 0x14332cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x143330: 0x52023  negu        $a0, $a1
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x143334: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x143334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x143338: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x143338u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x14333c: 0xa8182a  slt         $v1, $a1, $t0
    ctx->pc = 0x14333cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x143340: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x143340u;
    {
        const bool branch_taken_0x143340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143340) {
            ctx->pc = 0x143344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143340u;
            // 0x143344: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143354u;
            goto label_143354;
        }
    }
    ctx->pc = 0x143348u;
    // 0x143348: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x143348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14334c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143350: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x143350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_143354:
    // 0x143354: 0x1a7102a  slt         $v0, $t5, $a3
    ctx->pc = 0x143354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x143358: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x143358u;
    {
        const bool branch_taken_0x143358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143358u;
        // 0x14335c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143358) {
            ctx->pc = 0x143328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143328;
        }
    }
    ctx->pc = 0x143360u;
    // 0x143360: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x143364: 0x8d24849c  lw          $a0, -0x7B64($t1)
    ctx->pc = 0x143364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294935708)));
    // 0x143368: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x14336c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143370: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x143370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x143374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143374u;
    {
        const bool branch_taken_0x143374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143374u;
        // 0x143378: 0x2542ffff  addiu       $v0, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143374) {
            ctx->pc = 0x143388u;
            goto label_143388;
        }
    }
    ctx->pc = 0x14337Cu;
    // 0x14337c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14337cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143380u;
    {
        const bool branch_taken_0x143380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143380u;
        // 0x143384: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143380) {
            ctx->pc = 0x143398u;
            goto label_143398;
        }
    }
    ctx->pc = 0x143388u;
label_143388:
    // 0x143388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14338c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x14338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x143390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143394: 0xad24849c  sw          $a0, -0x7B64($t1)
    ctx->pc = 0x143394u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294935708), GPR_U32(ctx, 4));
label_143398:
    // 0x143398: 0x8df0847c  lw          $s0, -0x7B84($t7)
    ctx->pc = 0x143398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294935676)));
    // 0x14339c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14339Cu;
    {
        const bool branch_taken_0x14339c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14339Cu;
        // 0x1433a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14339c) {
            ctx->pc = 0x1433D0u;
            goto label_1433d0;
        }
    }
    ctx->pc = 0x1433A4u;
    // 0x1433a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1433a8: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1433ac: 0x0  nop
    ctx->pc = 0x1433acu;
    // NOP
label_1433b0:
    // 0x1433b0: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1433b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1433b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1433B4u;
    {
        const bool branch_taken_0x1433b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433B4u;
        // 0x1433b8: 0xae0401c4  sw          $a0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433b4) {
            ctx->pc = 0x1433C4u;
            goto label_1433c4;
        }
    }
    ctx->pc = 0x1433BCu;
    // 0x1433bc: 0xae03019c  sw          $v1, 0x19C($s0)
    ctx->pc = 0x1433bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 3));
    // 0x1433c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1433c4:
    // 0x1433c4: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1433c8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1433C8u;
    {
        const bool branch_taken_0x1433c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433c8) {
            ctx->pc = 0x1433CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433C8u;
            // 0x1433cc: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1433B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1433b0;
        }
    }
    ctx->pc = 0x1433D0u;
label_1433d0:
    // 0x1433d0: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
    // 0x1433d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1433d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1433D8u;
    {
        const bool branch_taken_0x1433d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1433DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433D8u;
        // 0x1433dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433d8) {
            ctx->pc = 0x143410u;
            goto label_143410;
        }
    }
    ctx->pc = 0x1433E0u;
    // 0x1433e0: 0x8df0847c  lw          $s0, -0x7B84($t7)
    ctx->pc = 0x1433e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294935676)));
    // 0x1433e4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1433E4u;
    {
        const bool branch_taken_0x1433e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433E4u;
        // 0x1433e8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433e4) {
            ctx->pc = 0x143414u;
            goto label_143414;
        }
    }
    ctx->pc = 0x1433ECu;
    // 0x1433ec: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1433ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1433f0:
    // 0x1433f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1433F0u;
    {
        const bool branch_taken_0x1433f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433F0u;
        // 0x1433f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f0) {
            ctx->pc = 0x143400u;
            goto label_143400;
        }
    }
    ctx->pc = 0x1433F8u;
    // 0x1433f8: 0xc050ba0  jal         func_142E80
    ctx->pc = 0x1433F8u;
    SET_GPR_U32(ctx, 31, 0x143400u);
    ctx->pc = 0x1433FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433F8u;
    // 0x1433fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x142E80u, 0x1433F8u, 0x143400u)) {
        return;
    }
    ctx->pc = 0x143400u;
label_143400:
    // 0x143400: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x143404: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143404u;
    {
        const bool branch_taken_0x143404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x143404) {
            ctx->pc = 0x143408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143404u;
            // 0x143408: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1433F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1433f0;
        }
    }
    ctx->pc = 0x14340Cu;
    // 0x14340c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_143410:
    // 0x143410: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x143410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_143414:
    // 0x143414: 0x8c448484  lw          $a0, -0x7B7C($v0)
    ctx->pc = 0x143414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935684)));
    // 0x143418: 0xac648488  sw          $a0, -0x7B78($v1)
    ctx->pc = 0x143418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935688), GPR_U32(ctx, 4));
label_14341c:
    // 0x14341c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14341cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_143420:
    // 0x143420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x143420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143428: 0x3e00008  jr          $ra
    ctx->pc = 0x143428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143428u;
        // 0x14342c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143430u;
}
