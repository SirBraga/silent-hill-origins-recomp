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

// Function: sub_00306570
// Address: 0x306570 - 0x306720
void sub_00306570_0x306570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306570_0x306570");
#endif

    switch (ctx->pc) {
        case 0x3065b0u: goto label_3065b0;
        case 0x3065e4u: goto label_3065e4;
        case 0x306600u: goto label_306600;
        case 0x306624u: goto label_306624;
        case 0x306640u: goto label_306640;
        case 0x30664cu: goto label_30664c;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066f4u: goto label_3066f4;
        default: break;
    }

    ctx->pc = 0x306570u;

    // 0x306570: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x306570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x306574: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x306574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x306578: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x306578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x30657c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30657cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306580: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x306580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x306584: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x306584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x306588: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x306588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x30658c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x306590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x306590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306594: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x306594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x306598: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x306598u;
    {
        const bool branch_taken_0x306598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306598u;
        // 0x30659c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306598) {
            ctx->pc = 0x3065B8u;
            goto label_3065b8;
        }
    }
    ctx->pc = 0x3065A0u;
    // 0x3065a0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3065a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3065a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3065a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065a8: 0xc092dbc  jal         func_24B6F0
    ctx->pc = 0x3065A8u;
    SET_GPR_U32(ctx, 31, 0x3065B0u);
    ctx->pc = 0x3065ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065A8u;
    // 0x3065ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x3065A8u, 0x3065B0u)) {
        return;
    }
    ctx->pc = 0x3065B0u;
label_3065b0:
    // 0x3065b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3065B0u;
    {
        const bool branch_taken_0x3065b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065B0u;
        // 0x3065b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065b0) {
            ctx->pc = 0x3065DCu;
            goto label_3065dc;
        }
    }
    ctx->pc = 0x3065B8u;
label_3065b8:
    // 0x3065b8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3065b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3065bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3065bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3065c0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3065c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3065c4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3065c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3065c8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3065c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3065cc: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3065ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3065d0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3065d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3065d4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x3065d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3065d8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3065d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3065dc:
    // 0x3065dc: 0xc0c195a  jal         func_306568
    ctx->pc = 0x3065DCu;
    SET_GPR_U32(ctx, 31, 0x3065E4u);
    ctx->pc = 0x306568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306568u, 0x3065DCu, 0x3065E4u)) {
        return;
    }
    ctx->pc = 0x3065E4u;
label_3065e4:
    // 0x3065e4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3065e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3065e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3065e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3065ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3065f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3065f4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3065f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3065f8: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x3065F8u;
    SET_GPR_U32(ctx, 31, 0x306600u);
    ctx->pc = 0x3065FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065F8u;
    // 0x3065fc: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x3065F8u, 0x306600u)) {
        return;
    }
    ctx->pc = 0x306600u;
label_306600:
    // 0x306600: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x306600u;
    {
        const bool branch_taken_0x306600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306600u;
        // 0x306604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306600) {
            ctx->pc = 0x306630u;
            goto label_306630;
        }
    }
    ctx->pc = 0x306608u;
    // 0x306608: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x306608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x30660c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306614: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x306614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x306618: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x306618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x30661c: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x30661Cu;
    SET_GPR_U32(ctx, 31, 0x306624u);
    ctx->pc = 0x306620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30661Cu;
    // 0x306620: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x30661Cu, 0x306624u)) {
        return;
    }
    ctx->pc = 0x306624u;
label_306624:
    // 0x306624: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x306624u;
    {
        const bool branch_taken_0x306624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306624) {
            ctx->pc = 0x306628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306624u;
            // 0x306628: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306654u;
            goto label_306654;
        }
    }
    ctx->pc = 0x30662Cu;
    // 0x30662c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306630:
    // 0x306630: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x306634: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x306634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x306638: 0xc092848  jal         func_24A120
    ctx->pc = 0x306638u;
    SET_GPR_U32(ctx, 31, 0x306640u);
    ctx->pc = 0x30663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306638u;
    // 0x30663c: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x306638u, 0x306640u)) {
        return;
    }
    ctx->pc = 0x306640u;
label_306640:
    // 0x306640: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x306640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x306644: 0xc09281a  jal         func_24A068
    ctx->pc = 0x306644u;
    SET_GPR_U32(ctx, 31, 0x30664Cu);
    ctx->pc = 0x306648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306644u;
    // 0x306648: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x306644u, 0x30664Cu)) {
        return;
    }
    ctx->pc = 0x30664Cu;
label_30664c:
    // 0x30664c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x30664Cu;
    {
        const bool branch_taken_0x30664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30664Cu;
        // 0x306650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30664c) {
            ctx->pc = 0x306700u;
            goto label_306700;
        }
    }
    ctx->pc = 0x306654u;
label_306654:
    // 0x306654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306658: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x306658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30665c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x306660: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x306660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x306664: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x306664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x306668: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x306668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30666c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x306670: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x306670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306674: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x306674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306678: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x306678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x30667c: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x30667cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x306680: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x306680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x306684: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x306684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x306688: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x306688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30668c: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x30668cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306690: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x306690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x306694: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x306694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x306698: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x306698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30669c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x30669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3066a0: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x3066a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3066a4: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x3066a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3066a8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3066a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x3066ac: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x3066acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3066b0: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x3066b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3066b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3066b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3066b8: 0xb3a2002b  sdl         $v0, 0x2B($sp)
    ctx->pc = 0x3066b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3066bc: 0xb7a20024  sdr         $v0, 0x24($sp)
    ctx->pc = 0x3066bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3066c0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x3066c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x3066c4: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x3066C4u;
    SET_GPR_U32(ctx, 31, 0x3066CCu);
    ctx->pc = 0x3066C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066C4u;
    // 0x3066c8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x3066C4u, 0x3066CCu)) {
        return;
    }
    ctx->pc = 0x3066CCu;
label_3066cc:
    // 0x3066cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3066CCu;
    {
        const bool branch_taken_0x3066cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3066D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066CCu;
        // 0x3066d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3066cc) {
            ctx->pc = 0x306700u;
            goto label_306700;
        }
    }
    ctx->pc = 0x3066D4u;
    // 0x3066d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3066d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3066d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3066d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3066dc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3066dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3066e0: 0xc092848  jal         func_24A120
    ctx->pc = 0x3066E0u;
    SET_GPR_U32(ctx, 31, 0x3066E8u);
    ctx->pc = 0x3066E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066E0u;
    // 0x3066e4: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3066E0u, 0x3066E8u)) {
        return;
    }
    ctx->pc = 0x3066E8u;
label_3066e8:
    // 0x3066e8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3066e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x3066ec: 0xc09281a  jal         func_24A068
    ctx->pc = 0x3066ECu;
    SET_GPR_U32(ctx, 31, 0x3066F4u);
    ctx->pc = 0x3066F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066ECu;
    // 0x3066f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3066ECu, 0x3066F4u)) {
        return;
    }
    ctx->pc = 0x3066F4u;
label_3066f4:
    // 0x3066f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3066f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3066f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3066f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3066fc: 0x0  nop
    ctx->pc = 0x3066fcu;
    // NOP
label_306700:
    // 0x306700: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x306700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x306704: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x306704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x306708: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x306708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30670c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30670cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x306710: 0x3e00008  jr          $ra
    ctx->pc = 0x306710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306710u;
        // 0x306714: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306718u;
    // 0x306718: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x306718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30671c: 0x0  nop
    ctx->pc = 0x30671cu;
    // NOP
    ctx->pc = 0x306720u;
}
