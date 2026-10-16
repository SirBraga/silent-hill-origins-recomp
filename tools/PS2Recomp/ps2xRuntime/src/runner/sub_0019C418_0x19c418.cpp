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

// Function: sub_0019C418
// Address: 0x19c418 - 0x19c520
void sub_0019C418_0x19c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C418_0x19c418");
#endif

    switch (ctx->pc) {
        case 0x19c418u: goto label_19c418;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c420u: goto label_19c420;
        case 0x19c424u: goto label_19c424;
        case 0x19c428u: goto label_19c428;
        case 0x19c42cu: goto label_19c42c;
        case 0x19c430u: goto label_19c430;
        case 0x19c434u: goto label_19c434;
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        case 0x19c500u: goto label_19c500;
        case 0x19c504u: goto label_19c504;
        case 0x19c508u: goto label_19c508;
        case 0x19c50cu: goto label_19c50c;
        case 0x19c510u: goto label_19c510;
        case 0x19c514u: goto label_19c514;
        case 0x19c518u: goto label_19c518;
        case 0x19c51cu: goto label_19c51c;
        default: break;
    }

    ctx->pc = 0x19c418u;

label_19c418:
    // 0x19c418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19c41c:
    // 0x19c41c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_19c420:
    // 0x19c420: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_19c424:
    // 0x19c424: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_19c428:
    // 0x19c428: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19c428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_19c42c:
    // 0x19c42c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19c42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c430:
    // 0x19c430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19c430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19c434:
    // 0x19c434: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19c434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c438:
    // 0x19c438: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_19c43c:
    // 0x19c43c: 0x2442a230  addiu       $v0, $v0, -0x5DD0
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
label_19c440:
    // 0x19c440: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19c444:
    // 0x19c444: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x19c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
label_19c448:
    // 0x19c448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c44c:
    // 0x19c44c: 0x26920038  addiu       $s2, $s4, 0x38
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_19c450:
    // 0x19c450: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19c450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_19c454:
    // 0x19c454: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x19c454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_19c458:
    // 0x19c458: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x19c458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_19c45c:
    // 0x19c45c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_19c460:
    // 0x19c460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c464:
    // 0x19c464: 0xc07fb0c  jal         func_1FEC30
label_19c468:
    if (ctx->pc == 0x19C468u) {
        ctx->pc = 0x19C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C464u;
        // 0x19c468: 0x26910040  addiu       $s1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C46Cu;
        goto label_19c46c;
    }
    ctx->pc = 0x19C464u;
    SET_GPR_U32(ctx, 31, 0x19C46Cu);
    ctx->pc = 0x19C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C464u;
    // 0x19c468: 0x26910040  addiu       $s1, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19C464u, 0x19C46Cu)) {
        return;
    }
    ctx->pc = 0x19C46Cu;
label_19c46c:
    // 0x19c46c: 0x26900048  addiu       $s0, $s4, 0x48
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_19c470:
    // 0x19c470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c474:
    // 0x19c474: 0xc07fb0c  jal         func_1FEC30
label_19c478:
    if (ctx->pc == 0x19C478u) {
        ctx->pc = 0x19C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C474u;
        // 0x19c478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C47Cu;
        goto label_19c47c;
    }
    ctx->pc = 0x19C474u;
    SET_GPR_U32(ctx, 31, 0x19C47Cu);
    ctx->pc = 0x19C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C474u;
    // 0x19c478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19C474u, 0x19C47Cu)) {
        return;
    }
    ctx->pc = 0x19C47Cu;
label_19c47c:
    // 0x19c47c: 0xc07fac2  jal         func_1FEB08
label_19c480:
    if (ctx->pc == 0x19C480u) {
        ctx->pc = 0x19C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C47Cu;
        // 0x19c480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C484u;
        goto label_19c484;
    }
    ctx->pc = 0x19C47Cu;
    SET_GPR_U32(ctx, 31, 0x19C484u);
    ctx->pc = 0x19C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C47Cu;
    // 0x19c480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19C47Cu, 0x19C484u)) {
        return;
    }
    ctx->pc = 0x19C484u;
label_19c484:
    // 0x19c484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c488:
    // 0x19c488: 0xc07fb0c  jal         func_1FEC30
label_19c48c:
    if (ctx->pc == 0x19C48Cu) {
        ctx->pc = 0x19C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C488u;
        // 0x19c48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C490u;
        goto label_19c490;
    }
    ctx->pc = 0x19C488u;
    SET_GPR_U32(ctx, 31, 0x19C490u);
    ctx->pc = 0x19C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C488u;
    // 0x19c48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19C488u, 0x19C490u)) {
        return;
    }
    ctx->pc = 0x19C490u;
label_19c490:
    // 0x19c490: 0xc07fac2  jal         func_1FEB08
label_19c494:
    if (ctx->pc == 0x19C494u) {
        ctx->pc = 0x19C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C490u;
        // 0x19c494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C498u;
        goto label_19c498;
    }
    ctx->pc = 0x19C490u;
    SET_GPR_U32(ctx, 31, 0x19C498u);
    ctx->pc = 0x19C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C490u;
    // 0x19c494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19C490u, 0x19C498u)) {
        return;
    }
    ctx->pc = 0x19C498u;
label_19c498:
    // 0x19c498: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x19c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_19c49c:
    // 0x19c49c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c4a0:
    // 0x19c4a0: 0xc0b69c2  jal         func_2DA708
label_19c4a4:
    if (ctx->pc == 0x19C4A4u) {
        ctx->pc = 0x19C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4A0u;
        // 0x19c4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4A8u;
        goto label_19c4a8;
    }
    ctx->pc = 0x19C4A0u;
    SET_GPR_U32(ctx, 31, 0x19C4A8u);
    ctx->pc = 0x19C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4A0u;
    // 0x19c4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x19C4A0u, 0x19C4A8u)) {
        return;
    }
    ctx->pc = 0x19C4A8u;
label_19c4a8:
    // 0x19c4a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_19c4ac:
    // 0x19c4ac: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_19c4b0:
    // 0x19c4b0: 0x40f809  jalr        $v0
label_19c4b4:
    if (ctx->pc == 0x19C4B4u) {
        ctx->pc = 0x19C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B0u;
        // 0x19c4b4: 0x8e840054  lw          $a0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4B8u;
        goto label_19c4b8;
    }
    ctx->pc = 0x19C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C4B8u);
        ctx->pc = 0x19C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B0u;
        // 0x19c4b4: 0x8e840054  lw          $a0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4B0u, 0x19C4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C4B8u;
label_19c4b8:
    // 0x19c4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c4bc:
    // 0x19c4bc: 0xc07fbec  jal         func_1FEFB0
label_19c4c0:
    if (ctx->pc == 0x19C4C0u) {
        ctx->pc = 0x19C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4BCu;
        // 0x19c4c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4C4u;
        goto label_19c4c4;
    }
    ctx->pc = 0x19C4BCu;
    SET_GPR_U32(ctx, 31, 0x19C4C4u);
    ctx->pc = 0x19C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4BCu;
    // 0x19c4c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19C4BCu, 0x19C4C4u)) {
        return;
    }
    ctx->pc = 0x19C4C4u;
label_19c4c4:
    // 0x19c4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c4c8:
    // 0x19c4c8: 0xc07fbec  jal         func_1FEFB0
label_19c4cc:
    if (ctx->pc == 0x19C4CCu) {
        ctx->pc = 0x19C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4C8u;
        // 0x19c4cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4D0u;
        goto label_19c4d0;
    }
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4C8u;
    // 0x19c4cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19C4C8u, 0x19C4D0u)) {
        return;
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c4d4:
    // 0x19c4d4: 0xc07fc62  jal         func_1FF188
label_19c4d8:
    if (ctx->pc == 0x19C4D8u) {
        ctx->pc = 0x19C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D4u;
        // 0x19c4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4DCu;
        goto label_19c4dc;
    }
    ctx->pc = 0x19C4D4u;
    SET_GPR_U32(ctx, 31, 0x19C4DCu);
    ctx->pc = 0x19C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4D4u;
    // 0x19c4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x19C4D4u, 0x19C4DCu)) {
        return;
    }
    ctx->pc = 0x19C4DCu;
label_19c4dc:
    // 0x19c4dc: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_19c4e0:
    // 0x19c4e0: 0xc07f11c  jal         func_1FC470
label_19c4e4:
    if (ctx->pc == 0x19C4E4u) {
        ctx->pc = 0x19C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E0u;
        // 0x19c4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4E8u;
        goto label_19c4e8;
    }
    ctx->pc = 0x19C4E0u;
    SET_GPR_U32(ctx, 31, 0x19C4E8u);
    ctx->pc = 0x19C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4E0u;
    // 0x19c4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x19C4E0u, 0x19C4E8u)) {
        return;
    }
    ctx->pc = 0x19C4E8u;
label_19c4e8:
    // 0x19c4e8: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x19c4e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_19c4ec:
    // 0x19c4ec: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_19c4f0:
    if (ctx->pc == 0x19C4F0u) {
        ctx->pc = 0x19C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4ECu;
        // 0x19c4f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4F4u;
        goto label_19c4f4;
    }
    ctx->pc = 0x19C4ECu;
    {
        const bool branch_taken_0x19c4ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4ECu;
        // 0x19c4f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4ec) {
            ctx->pc = 0x19C500u;
            goto label_19c500;
        }
    }
    ctx->pc = 0x19C4F4u;
label_19c4f4:
    // 0x19c4f4: 0xc0808b8  jal         func_2022E0
label_19c4f8:
    if (ctx->pc == 0x19C4F8u) {
        ctx->pc = 0x19C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4F4u;
        // 0x19c4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4FCu;
        goto label_19c4fc;
    }
    ctx->pc = 0x19C4F4u;
    SET_GPR_U32(ctx, 31, 0x19C4FCu);
    ctx->pc = 0x19C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4F4u;
    // 0x19c4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19C4F4u, 0x19C4FCu)) {
        return;
    }
    ctx->pc = 0x19C4FCu;
label_19c4fc:
    // 0x19c4fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19c4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19c500:
    // 0x19c500: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19c500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c504:
    // 0x19c504: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c508:
    // 0x19c508: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19c508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c50c:
    // 0x19c50c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19c50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c510:
    // 0x19c510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c514:
    // 0x19c514: 0x3e00008  jr          $ra
label_19c518:
    if (ctx->pc == 0x19C518u) {
        ctx->pc = 0x19C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C514u;
        // 0x19c518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C51Cu;
        goto label_19c51c;
    }
    ctx->pc = 0x19C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C514u;
        // 0x19c518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C51Cu;
label_19c51c:
    // 0x19c51c: 0x0  nop
    ctx->pc = 0x19c51cu;
    // NOP
    ctx->pc = 0x19c520u;
}
