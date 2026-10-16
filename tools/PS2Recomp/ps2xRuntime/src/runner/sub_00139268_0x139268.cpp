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

// Function: sub_00139268
// Address: 0x139268 - 0x139350
void sub_00139268_0x139268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139268_0x139268");
#endif

    switch (ctx->pc) {
        case 0x13928cu: goto label_13928c;
        case 0x1392a4u: goto label_1392a4;
        case 0x1392c4u: goto label_1392c4;
        case 0x1392dcu: goto label_1392dc;
        case 0x1392f4u: goto label_1392f4;
        case 0x13930cu: goto label_13930c;
        case 0x139324u: goto label_139324;
        case 0x139340u: goto label_139340;
        default: break;
    }

    ctx->pc = 0x139268u;

    // 0x139268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13926c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13926cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x139270: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x139270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x139274: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13927c: 0x24844758  addiu       $a0, $a0, 0x4758
    ctx->pc = 0x13927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18264));
    // 0x139280: 0x24a5eb30  addiu       $a1, $a1, -0x14D0
    ctx->pc = 0x139280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
    // 0x139284: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x139284u;
    SET_GPR_U32(ctx, 31, 0x13928Cu);
    ctx->pc = 0x139288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139284u;
    // 0x139288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x139284u, 0x13928Cu)) {
        return;
    }
    ctx->pc = 0x13928Cu;
label_13928c:
    // 0x13928c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x139290: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x139290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x139294: 0x24844760  addiu       $a0, $a0, 0x4760
    ctx->pc = 0x139294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    // 0x139298: 0x24a5eb50  addiu       $a1, $a1, -0x14B0
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    // 0x13929c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x13929Cu;
    SET_GPR_U32(ctx, 31, 0x1392A4u);
    ctx->pc = 0x1392A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13929Cu;
    // 0x1392a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x13929Cu, 0x1392A4u)) {
        return;
    }
    ctx->pc = 0x1392A4u;
label_1392a4:
    // 0x1392a4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1392a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1392a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1392ac: 0x2610eb90  addiu       $s0, $s0, -0x1470
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962064));
    // 0x1392b0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1392b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1392b4: 0x24844768  addiu       $a0, $a0, 0x4768
    ctx->pc = 0x1392b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18280));
    // 0x1392b8: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x1392bc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1392BCu;
    SET_GPR_U32(ctx, 31, 0x1392C4u);
    ctx->pc = 0x1392C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392BCu;
    // 0x1392c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1392BCu, 0x1392C4u)) {
        return;
    }
    ctx->pc = 0x1392C4u;
label_1392c4:
    // 0x1392c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1392c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1392c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1392c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1392cc: 0x24844770  addiu       $a0, $a0, 0x4770
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18288));
    // 0x1392d0: 0x24a5eba0  addiu       $a1, $a1, -0x1460
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
    // 0x1392d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1392D4u;
    SET_GPR_U32(ctx, 31, 0x1392DCu);
    ctx->pc = 0x1392D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392D4u;
    // 0x1392d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1392D4u, 0x1392DCu)) {
        return;
    }
    ctx->pc = 0x1392DCu;
label_1392dc:
    // 0x1392dc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1392dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1392e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1392e4: 0x24844778  addiu       $a0, $a0, 0x4778
    ctx->pc = 0x1392e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18296));
    // 0x1392e8: 0x24a5ebc0  addiu       $a1, $a1, -0x1440
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962112));
    // 0x1392ec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1392ECu;
    SET_GPR_U32(ctx, 31, 0x1392F4u);
    ctx->pc = 0x1392F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392ECu;
    // 0x1392f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1392ECu, 0x1392F4u)) {
        return;
    }
    ctx->pc = 0x1392F4u;
label_1392f4:
    // 0x1392f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1392f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1392f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1392fc: 0x24844780  addiu       $a0, $a0, 0x4780
    ctx->pc = 0x1392fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    // 0x139300: 0x24a5ebe8  addiu       $a1, $a1, -0x1418
    ctx->pc = 0x139300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962152));
    // 0x139304: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x139304u;
    SET_GPR_U32(ctx, 31, 0x13930Cu);
    ctx->pc = 0x139308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139304u;
    // 0x139308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x139304u, 0x13930Cu)) {
        return;
    }
    ctx->pc = 0x13930Cu;
label_13930c:
    // 0x13930c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13930cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x139310: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x139314: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139318: 0x24844788  addiu       $a0, $a0, 0x4788
    ctx->pc = 0x139318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
    // 0x13931c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x13931Cu;
    SET_GPR_U32(ctx, 31, 0x139324u);
    ctx->pc = 0x139320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13931Cu;
    // 0x139320: 0x24a5ec10  addiu       $a1, $a1, -0x13F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x13931Cu, 0x139324u)) {
        return;
    }
    ctx->pc = 0x139324u;
label_139324:
    // 0x139324: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x139324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x139328: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x139328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13932c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13932cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x139330: 0x24844790  addiu       $a0, $a0, 0x4790
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    // 0x139334: 0x24a5ec38  addiu       $a1, $a1, -0x13C8
    ctx->pc = 0x139334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
    // 0x139338: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x139338u;
    SET_GPR_U32(ctx, 31, 0x139340u);
    ctx->pc = 0x13933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139338u;
    // 0x13933c: 0x24c6ec60  addiu       $a2, $a2, -0x13A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x139338u, 0x139340u)) {
        return;
    }
    ctx->pc = 0x139340u;
label_139340:
    // 0x139340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139348: 0x3e00008  jr          $ra
    ctx->pc = 0x139348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139348u;
        // 0x13934c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139350u;
}
