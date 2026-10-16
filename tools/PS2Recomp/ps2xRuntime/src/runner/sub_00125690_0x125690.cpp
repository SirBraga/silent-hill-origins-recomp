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

// Function: sub_00125690
// Address: 0x125690 - 0x125768
void sub_00125690_0x125690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125690_0x125690");
#endif

    switch (ctx->pc) {
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        default: break;
    }

    ctx->pc = 0x125690u;

label_125690:
    // 0x125690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_125694:
    // 0x125694: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x125694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_125698:
    // 0x125698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12569c:
    // 0x12569c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1256a0:
    // 0x1256a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1256a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1256a4:
    // 0x1256a4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1256a8:
    // 0x1256a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1256ac:
    if (ctx->pc == 0x1256ACu) {
        ctx->pc = 0x1256ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A8u;
        // 0x1256ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256B0u;
        goto label_1256b0;
    }
    ctx->pc = 0x1256A8u;
    {
        const bool branch_taken_0x1256a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256A8u;
        // 0x1256ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256a8) {
            ctx->pc = 0x1256C4u;
            goto label_1256c4;
        }
    }
    ctx->pc = 0x1256B0u;
label_1256b0:
    // 0x1256b0: 0xc040688  jal         func_101A20
label_1256b4:
    if (ctx->pc == 0x1256B4u) {
        ctx->pc = 0x1256B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256B0u;
        // 0x1256b4: 0x2405270f  addiu       $a1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256B8u;
        goto label_1256b8;
    }
    ctx->pc = 0x1256B0u;
    SET_GPR_U32(ctx, 31, 0x1256B8u);
    ctx->pc = 0x1256B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256B0u;
    // 0x1256b4: 0x2405270f  addiu       $a1, $zero, 0x270F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1256B0u, 0x1256B8u)) {
        return;
    }
    ctx->pc = 0x1256B8u;
label_1256b8:
    // 0x1256b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1256b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1256bc:
    // 0x1256bc: 0xc040976  jal         func_1025D8
label_1256c0:
    if (ctx->pc == 0x1256C0u) {
        ctx->pc = 0x1256C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256BCu;
        // 0x1256c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256C4u;
        goto label_1256c4;
    }
    ctx->pc = 0x1256BCu;
    SET_GPR_U32(ctx, 31, 0x1256C4u);
    ctx->pc = 0x1256C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256BCu;
    // 0x1256c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1025D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1025D8u, 0x1256BCu, 0x1256C4u)) {
        return;
    }
    ctx->pc = 0x1256C4u;
label_1256c4:
    // 0x1256c4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1256c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1256c8:
    // 0x1256c8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1256cc:
    // 0x1256cc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1256d0:
    // 0x1256d0: 0x60f809  jalr        $v1
label_1256d4:
    if (ctx->pc == 0x1256D4u) {
        ctx->pc = 0x1256D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256D0u;
        // 0x1256d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256D8u;
        goto label_1256d8;
    }
    ctx->pc = 0x1256D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1256D8u);
        ctx->pc = 0x1256D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256D0u;
        // 0x1256d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1256D0u, 0x1256D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1256D8u;
label_1256d8:
    // 0x1256d8: 0xc049676  jal         func_1259D8
label_1256dc:
    if (ctx->pc == 0x1256DCu) {
        ctx->pc = 0x1256DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256D8u;
        // 0x1256dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1256E0u;
        goto label_1256e0;
    }
    ctx->pc = 0x1256D8u;
    SET_GPR_U32(ctx, 31, 0x1256E0u);
    ctx->pc = 0x1256DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1256D8u;
    // 0x1256dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1259D8u, 0x1256D8u, 0x1256E0u)) {
        return;
    }
    ctx->pc = 0x1256E0u;
label_1256e0:
    // 0x1256e0: 0x26030320  addiu       $v1, $s0, 0x320
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_1256e4:
    // 0x1256e4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1256e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_1256e8:
    // 0x1256e8: 0x8c69080c  lw          $t1, 0x80C($v1)
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2060)));
label_1256ec:
    // 0x1256ec: 0x2442bb60  addiu       $v0, $v0, -0x44A0
    ctx->pc = 0x1256ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949728));
label_1256f0:
    // 0x1256f0: 0x8c640848  lw          $a0, 0x848($v1)
    ctx->pc = 0x1256f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2120)));
label_1256f4:
    // 0x1256f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1256f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1256f8:
    // 0x1256f8: 0xac620890  sw          $v0, 0x890($v1)
    ctx->pc = 0x1256f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 2));
label_1256fc:
    // 0x1256fc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1256fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_125700:
    // 0x125700: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_125704:
    // 0x125704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125708:
    // 0x125708: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x125708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_12570c:
    // 0x12570c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12570cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125710:
    // 0x125710: 0xc048e08  jal         func_123820
label_125714:
    if (ctx->pc == 0x125714u) {
        ctx->pc = 0x125714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125710u;
        // 0x125714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125718u;
        goto label_125718;
    }
    ctx->pc = 0x125710u;
    SET_GPR_U32(ctx, 31, 0x125718u);
    ctx->pc = 0x125714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125710u;
    // 0x125714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123820u, 0x125710u, 0x125718u)) {
        return;
    }
    ctx->pc = 0x125718u;
label_125718:
    // 0x125718: 0xc040678  jal         func_1019E0
label_12571c:
    if (ctx->pc == 0x12571Cu) {
        ctx->pc = 0x12571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125718u;
        // 0x12571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125720u;
        goto label_125720;
    }
    ctx->pc = 0x125718u;
    SET_GPR_U32(ctx, 31, 0x125720u);
    ctx->pc = 0x12571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125718u;
    // 0x12571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019E0u, 0x125718u, 0x125720u)) {
        return;
    }
    ctx->pc = 0x125720u;
label_125720:
    // 0x125720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125724:
    // 0x125724: 0xc040220  jal         func_100880
label_125728:
    if (ctx->pc == 0x125728u) {
        ctx->pc = 0x125728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125724u;
        // 0x125728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12572Cu;
        goto label_12572c;
    }
    ctx->pc = 0x125724u;
    SET_GPR_U32(ctx, 31, 0x12572Cu);
    ctx->pc = 0x125728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125724u;
    // 0x125728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100880u, 0x125724u, 0x12572Cu)) {
        return;
    }
    ctx->pc = 0x12572Cu;
label_12572c:
    // 0x12572c: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
label_125730:
    // 0x125730: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125730u;
        // 0x125734: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    {
        const bool branch_taken_0x125730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125730) {
            ctx->pc = 0x125734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125730u;
            // 0x125734: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125744u;
            goto label_125744;
        }
    }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0xc059c72  jal         func_1671C8
label_12573c:
    if (ctx->pc == 0x12573Cu) {
        ctx->pc = 0x12573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125738u;
        // 0x12573c: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125740u;
        goto label_125740;
    }
    ctx->pc = 0x125738u;
    SET_GPR_U32(ctx, 31, 0x125740u);
    ctx->pc = 0x12573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125738u;
    // 0x12573c: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1671C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1671C8u, 0x125738u, 0x125740u)) {
        return;
    }
    ctx->pc = 0x125740u;
label_125740:
    // 0x125740: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x125740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_125744:
    // 0x125744: 0x844401d0  lh          $a0, 0x1D0($v0)
    ctx->pc = 0x125744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 464)));
label_125748:
    // 0x125748: 0x8c4301d4  lw          $v1, 0x1D4($v0)
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_12574c:
    // 0x12574c: 0x60f809  jalr        $v1
label_125750:
    if (ctx->pc == 0x125750u) {
        ctx->pc = 0x125750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12574Cu;
        // 0x125750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125754u;
        goto label_125754;
    }
    ctx->pc = 0x12574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125754u);
        ctx->pc = 0x125750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12574Cu;
        // 0x125750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12574Cu, 0x125754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125754u;
label_125754:
    // 0x125754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125758:
    // 0x125758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12575c:
    // 0x12575c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125760:
    // 0x125760: 0x3e00008  jr          $ra
label_125764:
    if (ctx->pc == 0x125764u) {
        ctx->pc = 0x125764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125760u;
        // 0x125764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125768u;
        goto label_fallthrough_0x125760;
    }
    ctx->pc = 0x125760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125760u;
        // 0x125764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125760:
    ctx->pc = 0x125768u;
}
