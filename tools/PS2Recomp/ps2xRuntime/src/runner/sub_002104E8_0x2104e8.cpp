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

// Function: sub_002104E8
// Address: 0x2104e8 - 0x210638
void sub_002104E8_0x2104e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002104E8_0x2104e8");
#endif

    switch (ctx->pc) {
        case 0x210538u: goto label_210538;
        case 0x210580u: goto label_210580;
        default: break;
    }

    ctx->pc = 0x2104e8u;

    // 0x2104e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2104e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2104ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2104ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2104f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2104f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2104f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2104f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2104f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104fc: 0x7fb60000  sq          $s6, 0x0($sp)
    ctx->pc = 0x2104fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 22));
    // 0x210500: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x210500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210504: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x210504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x210508: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x210508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21050c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x210510: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x210510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x210514: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x210514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x210518: 0x8c950070  lw          $s5, 0x70($a0)
    ctx->pc = 0x210518u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21051c: 0x8c8b01cc  lw          $t3, 0x1CC($a0)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x210520: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x210524: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x210524u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210528: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x210528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21052c: 0x1a600038  blez        $s3, . + 4 + (0x38 << 2)
    ctx->pc = 0x21052Cu;
    {
        const bool branch_taken_0x21052c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x210530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21052Cu;
        // 0x210530: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21052c) {
            ctx->pc = 0x210610u;
            goto label_210610;
        }
    }
    ctx->pc = 0x210534u;
    // 0x210534: 0x0  nop
    ctx->pc = 0x210534u;
    // NOP
label_210538:
    // 0x210538: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x21053c: 0x8d6c0030  lw          $t4, 0x30($t3)
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x210540: 0x743821  addu        $a3, $v1, $s4
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x210544: 0x8d660034  lw          $a2, 0x34($t3)
    ctx->pc = 0x210544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 52)));
    // 0x210548: 0x8d640038  lw          $a0, 0x38($t3)
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x21054c: 0xc1180  sll         $v0, $t4, 6
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x210550: 0x8d65003c  lw          $a1, 0x3C($t3)
    ctx->pc = 0x210550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 60)));
    // 0x210554: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x210554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x210558: 0x25390001  addiu       $t9, $t1, 0x1
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21055c: 0xc2c021  addu        $t8, $a2, $v0
    ctx->pc = 0x21055cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x210560: 0x827821  addu        $t7, $a0, $v0
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210564: 0xa27021  addu        $t6, $a1, $v0
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x210568: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x210568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21056c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x21056cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210570: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x210570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210574: 0x11200020  beqz        $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x210574u;
    {
        const bool branch_taken_0x210574 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x210578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210574u;
        // 0x210578: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210574) {
            ctx->pc = 0x2105F8u;
            goto label_2105f8;
        }
    }
    ctx->pc = 0x21057Cu;
    // 0x21057c: 0x0  nop
    ctx->pc = 0x21057cu;
    // NOP
label_210580:
    // 0x210580: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x210580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x210584: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x210584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210588: 0x581821  addu        $v1, $v0, $t8
    ctx->pc = 0x210588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x21058c: 0x4f3021  addu        $a2, $v0, $t7
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x210590: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x210590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210594: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x210598: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x210598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21059c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x21059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2105a0: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x2105a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2105a4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2105a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2105a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2105a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2105ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2105acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2105b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2105b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2105b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2105b8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2105b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2105bc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2105bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2105c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2105c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2105c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2105c8: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2105c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2105cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2105ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2105d0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2105d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2105d4: 0x25a40001  addiu       $a0, $t5, 0x1
    ctx->pc = 0x2105d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2105d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2105d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2105dc: 0x308d000f  andi        $t5, $a0, 0xF
    ctx->pc = 0x2105dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2105e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2105e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2105e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2105e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2105e8: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x2105e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2105ec: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2105ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2105f0: 0x1520ffe3  bnez        $t1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2105F0u;
    {
        const bool branch_taken_0x2105f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105F0u;
        // 0x2105f4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105f0) {
            ctx->pc = 0x210580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210580;
        }
    }
    ctx->pc = 0x2105F8u;
label_2105f8:
    // 0x2105f8: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x2105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2105fc: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x2105fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210600: 0x304c000f  andi        $t4, $v0, 0xF
    ctx->pc = 0x210600u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x210604: 0x133182a  slt         $v1, $t1, $s3
    ctx->pc = 0x210604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210608: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x210608u;
    {
        const bool branch_taken_0x210608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210608u;
        // 0x21060c: 0xad6c0030  sw          $t4, 0x30($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210608) {
            ctx->pc = 0x210538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210538;
        }
    }
    ctx->pc = 0x210610u;
label_210610:
    // 0x210610: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x210610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210614: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x210614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210618: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x210618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21061c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21061cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210620: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x210620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210624: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x210624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210628: 0x7bb60000  lq          $s6, 0x0($sp)
    ctx->pc = 0x210628u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21062c: 0x3e00008  jr          $ra
    ctx->pc = 0x21062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21062Cu;
        // 0x210630: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210634u;
    // 0x210634: 0x0  nop
    ctx->pc = 0x210634u;
    // NOP
    ctx->pc = 0x210638u;
}
