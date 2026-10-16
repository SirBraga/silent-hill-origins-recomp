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

// Function: sub_0010B660
// Address: 0x10b660 - 0x10b8f0
void sub_0010B660_0x10b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B660_0x10b660");
#endif

    switch (ctx->pc) {
        case 0x10b67cu: goto label_10b67c;
        case 0x10b694u: goto label_10b694;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b700u: goto label_10b700;
        case 0x10b750u: goto label_10b750;
        case 0x10b790u: goto label_10b790;
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b8dcu: goto label_10b8dc;
        default: break;
    }

    ctx->pc = 0x10b660u;

    // 0x10b660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10b664: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10b668: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10b66c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b670: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b674: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x10B674u;
    SET_GPR_U32(ctx, 31, 0x10B67Cu);
    ctx->pc = 0x10B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B674u;
    // 0x10b678: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x10B674u, 0x10B67Cu)) {
        return;
    }
    ctx->pc = 0x10B67Cu;
label_10b67c:
    // 0x10b67c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10b680: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x10b684: 0x5482001a  bnel        $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10B684u;
    {
        const bool branch_taken_0x10b684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b684) {
            ctx->pc = 0x10B688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B684u;
            // 0x10b688: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B6F0u;
            goto label_10b6f0;
        }
    }
    ctx->pc = 0x10B68Cu;
    // 0x10b68c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B68Cu;
    SET_GPR_U32(ctx, 31, 0x10B694u);
    ctx->pc = 0x10B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B68Cu;
    // 0x10b690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B68Cu, 0x10B694u)) {
        return;
    }
    ctx->pc = 0x10B694u;
label_10b694:
    // 0x10b694: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10b698: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b69c: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x10b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x10b6a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10b6a4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10b6a8: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x10b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x10b6ac: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10b6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10b6b0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10b6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10b6b4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x10b6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b6b8: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x10b6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b6bc: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x10b6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b6c0: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x10b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x10b6c4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10b6c8: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B6C8u;
    {
        const bool branch_taken_0x10b6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x10B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6C8u;
        // 0x10b6cc: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6c8) {
            ctx->pc = 0x10B6E4u;
            goto label_10b6e4;
        }
    }
    ctx->pc = 0x10B6D0u;
    // 0x10b6d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b6d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B6D4u;
    {
        const bool branch_taken_0x10b6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6D4u;
        // 0x10b6d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6d4) {
            ctx->pc = 0x10B6E8u;
            goto label_10b6e8;
        }
    }
    ctx->pc = 0x10B6DCu;
    // 0x10b6dc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10B6DCu;
    SET_GPR_U32(ctx, 31, 0x10B6E4u);
    ctx->pc = 0x10B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6DCu;
    // 0x10b6e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10B6DCu, 0x10B6E4u)) {
        return;
    }
    ctx->pc = 0x10B6E4u;
label_10b6e4:
    // 0x10b6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b6e8:
    // 0x10b6e8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x10B6E8u;
    {
        const bool branch_taken_0x10b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6E8u;
        // 0x10b6ec: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6e8) {
            ctx->pc = 0x10B8DCu;
            goto label_10b8dc;
        }
    }
    ctx->pc = 0x10B6F0u;
label_10b6f0:
    // 0x10b6f0: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10B6F0u;
    {
        const bool branch_taken_0x10b6f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F0u;
        // 0x10b6f4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f0) {
            ctx->pc = 0x10B758u;
            goto label_10b758;
        }
    }
    ctx->pc = 0x10B6F8u;
    // 0x10b6f8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B6F8u;
    SET_GPR_U32(ctx, 31, 0x10B700u);
    ctx->pc = 0x10B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6F8u;
    // 0x10b6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B6F8u, 0x10B700u)) {
        return;
    }
    ctx->pc = 0x10B700u;
label_10b700:
    // 0x10b700: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10b704: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b708: 0x8c6542e0  lw          $a1, 0x42E0($v1)
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42E0u));
    // 0x10b70c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10b710: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10b710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10b714: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x10b714u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x10b718: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10b718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10b71c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10b71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10b720: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x10b720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b724: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x10b724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b728: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x10b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b72c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x10b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x10b730: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b734: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B734u;
    {
        const bool branch_taken_0x10b734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x10B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B734u;
        // 0x10b738: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b734) {
            ctx->pc = 0x10B750u;
            goto label_10b750;
        }
    }
    ctx->pc = 0x10B73Cu;
    // 0x10b73c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b740: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x10B740u;
    {
        const bool branch_taken_0x10b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b740) {
            ctx->pc = 0x10B744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B740u;
            // 0x10b744: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B8DCu;
            goto label_10b8dc;
        }
    }
    ctx->pc = 0x10B748u;
    // 0x10b748: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10B748u;
    SET_GPR_U32(ctx, 31, 0x10B750u);
    ctx->pc = 0x10B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B748u;
    // 0x10b74c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10B748u, 0x10B750u)) {
        return;
    }
    ctx->pc = 0x10B750u;
label_10b750:
    // 0x10b750: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x10B750u;
    {
        const bool branch_taken_0x10b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B750u;
        // 0x10b754: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b750) {
            ctx->pc = 0x10B8DCu;
            goto label_10b8dc;
        }
    }
    ctx->pc = 0x10B758u;
label_10b758:
    // 0x10b758: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x10b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x10b75c: 0x54830060  bnel        $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x10B75Cu;
    {
        const bool branch_taken_0x10b75c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b75c) {
            ctx->pc = 0x10B760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B75Cu;
            // 0x10b760: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B8E0u;
            goto label_10b8e0;
        }
    }
    ctx->pc = 0x10B764u;
    // 0x10b764: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x10b768: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x10B768u;
    {
        const bool branch_taken_0x10b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b768) {
            ctx->pc = 0x10B76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B768u;
            // 0x10b76c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B8E0u;
            goto label_10b8e0;
        }
    }
    ctx->pc = 0x10B770u;
    // 0x10b770: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b774: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x10B774u;
    {
        const bool branch_taken_0x10b774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B774u;
        // 0x10b778: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b774) {
            ctx->pc = 0x10B8E0u;
            goto label_10b8e0;
        }
    }
    ctx->pc = 0x10B77Cu;
    // 0x10b77c: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x10b77cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10b780: 0x52000057  beql        $s0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x10B780u;
    {
        const bool branch_taken_0x10b780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b780) {
            ctx->pc = 0x10B784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B780u;
            // 0x10b784: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B8E0u;
            goto label_10b8e0;
        }
    }
    ctx->pc = 0x10B788u;
    // 0x10b788: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B788u;
    SET_GPR_U32(ctx, 31, 0x10B790u);
    ctx->pc = 0x10B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B788u;
    // 0x10b78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B788u, 0x10B790u)) {
        return;
    }
    ctx->pc = 0x10B790u;
label_10b790:
    // 0x10b790: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10b790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10b794: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10b794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10b798: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x10b798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b79c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x10b79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b7a0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10b7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7a8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B7A8u;
    SET_GPR_U32(ctx, 31, 0x10B7B0u);
    ctx->pc = 0x10B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7A8u;
    // 0x10b7ac: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B7A8u, 0x10B7B0u)) {
        return;
    }
    ctx->pc = 0x10B7B0u;
label_10b7b0:
    // 0x10b7b0: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x10b7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x10b7b4: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x10b7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x10b7b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b7bc: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x10b7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b7c0: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x10b7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b7c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x10b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x10b7c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x10b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b7cc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x10b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b7d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x10b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b7d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10b7d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x10b7d8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x10b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10b7dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x10b7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b7e0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x10b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b7e4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x10b7e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x10b7e8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x10b7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10b7ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x10b7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x10b7f0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x10b7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10b7f4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x10b7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x10b7f8: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x10b7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10b7fc: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x10b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10b800: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x10b800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10b804: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x10b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b808: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x10b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b80c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x10b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x10b810: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x10b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b814: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x10b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b818: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10b818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x10b81c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x10b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b820: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x10b820u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x10b824: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x10b824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x10b828: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10b828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x10b82c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10b82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10b830: 0x0  nop
    ctx->pc = 0x10b830u;
    // NOP
    // 0x10b834: 0x0  nop
    ctx->pc = 0x10b834u;
    // NOP
    // 0x10b838: 0x46000004  c1          0x4
    ctx->pc = 0x10b838u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x10b83c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10b83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10b840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10b844: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x10b844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10b848: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x10b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b84c: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x10b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b850: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x10b850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x10b854: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x10b854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x10b858: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10b858u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x10b85c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x10b85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10b860: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x10b860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b864: 0x0  nop
    ctx->pc = 0x10b864u;
    // NOP
    // 0x10b868: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10B868u;
    {
        const bool branch_taken_0x10b868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b868) {
            ctx->pc = 0x10B878u;
            goto label_10b878;
        }
    }
    ctx->pc = 0x10B870u;
    // 0x10b870: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B870u;
    {
        const bool branch_taken_0x10b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B870u;
        // 0x10b874: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b870) {
            ctx->pc = 0x10B888u;
            goto label_10b888;
        }
    }
    ctx->pc = 0x10B878u;
label_10b878:
    // 0x10b878: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x10b878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10b87c: 0x0  nop
    ctx->pc = 0x10b87cu;
    // NOP
    // 0x10b880: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10B880u;
    {
        const bool branch_taken_0x10b880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10b880) {
            ctx->pc = 0x10B884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B880u;
            // 0x10b884: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B888u;
            goto label_10b888;
        }
    }
    ctx->pc = 0x10B888u;
label_10b888:
    // 0x10b888: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10b88c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10b890: 0x8ca442e8  lw          $a0, 0x42E8($a1)
    ctx->pc = 0x10b890u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B42E8u));
    // 0x10b894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x10b894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10b898: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x10b898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x10b89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b8a0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x10b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10b8a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x10b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10b8a8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x10b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x10b8ac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10b8b0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x10b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x10b8b4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x10b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x10b8b8: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x10b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x10b8bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b8c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B8C0u;
    {
        const bool branch_taken_0x10b8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8C0u;
        // 0x10b8c4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c0) {
            ctx->pc = 0x10B8E0u;
            goto label_10b8e0;
        }
    }
    ctx->pc = 0x10B8C8u;
    // 0x10b8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b8cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B8CCu;
    {
        const bool branch_taken_0x10b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8CCu;
        // 0x10b8d0: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8cc) {
            ctx->pc = 0x10B8E4u;
            goto label_10b8e4;
        }
    }
    ctx->pc = 0x10B8D4u;
    // 0x10b8d4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10B8D4u;
    SET_GPR_U32(ctx, 31, 0x10B8DCu);
    ctx->pc = 0x10B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8D4u;
    // 0x10b8d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10B8D4u, 0x10B8DCu)) {
        return;
    }
    ctx->pc = 0x10B8DCu;
label_10b8dc:
    // 0x10b8dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10b8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_10b8e0:
    // 0x10b8e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x10b8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10b8e4:
    // 0x10b8e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8F0u;
}
