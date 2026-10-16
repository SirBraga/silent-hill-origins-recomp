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

// Function: sub_002EF588
// Address: 0x2ef588 - 0x2ef678
void sub_002EF588_0x2ef588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF588_0x2ef588");
#endif

    switch (ctx->pc) {
        case 0x2ef588u: goto label_2ef588;
        case 0x2ef58cu: goto label_2ef58c;
        case 0x2ef590u: goto label_2ef590;
        case 0x2ef594u: goto label_2ef594;
        case 0x2ef598u: goto label_2ef598;
        case 0x2ef59cu: goto label_2ef59c;
        case 0x2ef5a0u: goto label_2ef5a0;
        case 0x2ef5a4u: goto label_2ef5a4;
        case 0x2ef5a8u: goto label_2ef5a8;
        case 0x2ef5acu: goto label_2ef5ac;
        case 0x2ef5b0u: goto label_2ef5b0;
        case 0x2ef5b4u: goto label_2ef5b4;
        case 0x2ef5b8u: goto label_2ef5b8;
        case 0x2ef5bcu: goto label_2ef5bc;
        case 0x2ef5c0u: goto label_2ef5c0;
        case 0x2ef5c4u: goto label_2ef5c4;
        case 0x2ef5c8u: goto label_2ef5c8;
        case 0x2ef5ccu: goto label_2ef5cc;
        case 0x2ef5d0u: goto label_2ef5d0;
        case 0x2ef5d4u: goto label_2ef5d4;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5dcu: goto label_2ef5dc;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef5e8u: goto label_2ef5e8;
        case 0x2ef5ecu: goto label_2ef5ec;
        case 0x2ef5f0u: goto label_2ef5f0;
        case 0x2ef5f4u: goto label_2ef5f4;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef5fcu: goto label_2ef5fc;
        case 0x2ef600u: goto label_2ef600;
        case 0x2ef604u: goto label_2ef604;
        case 0x2ef608u: goto label_2ef608;
        case 0x2ef60cu: goto label_2ef60c;
        case 0x2ef610u: goto label_2ef610;
        case 0x2ef614u: goto label_2ef614;
        case 0x2ef618u: goto label_2ef618;
        case 0x2ef61cu: goto label_2ef61c;
        case 0x2ef620u: goto label_2ef620;
        case 0x2ef624u: goto label_2ef624;
        case 0x2ef628u: goto label_2ef628;
        case 0x2ef62cu: goto label_2ef62c;
        case 0x2ef630u: goto label_2ef630;
        case 0x2ef634u: goto label_2ef634;
        case 0x2ef638u: goto label_2ef638;
        case 0x2ef63cu: goto label_2ef63c;
        case 0x2ef640u: goto label_2ef640;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef648u: goto label_2ef648;
        case 0x2ef64cu: goto label_2ef64c;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef654u: goto label_2ef654;
        case 0x2ef658u: goto label_2ef658;
        case 0x2ef65cu: goto label_2ef65c;
        case 0x2ef660u: goto label_2ef660;
        case 0x2ef664u: goto label_2ef664;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef66cu: goto label_2ef66c;
        case 0x2ef670u: goto label_2ef670;
        case 0x2ef674u: goto label_2ef674;
        default: break;
    }

    ctx->pc = 0x2ef588u;

label_2ef588:
    // 0x2ef588: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ef58c:
    // 0x2ef58c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ef58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ef590:
    // 0x2ef590: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ef590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ef594:
    // 0x2ef594: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ef594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ef598:
    // 0x2ef598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ef598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ef59c:
    // 0x2ef59c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ef59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5a0:
    // 0x2ef5a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ef5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ef5a4:
    // 0x2ef5a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ef5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5a8:
    // 0x2ef5a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ef5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ef5ac:
    // 0x2ef5ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ef5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5b0:
    // 0x2ef5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef5b4:
    // 0x2ef5b4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_2ef5b8:
    if (ctx->pc == 0x2EF5B8u) {
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5BCu;
        goto label_2ef5bc;
    }
    ctx->pc = 0x2EF5B4u;
    {
        const bool branch_taken_0x2ef5b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5b4) {
            ctx->pc = 0x2EF5D0u;
            goto label_2ef5d0;
        }
    }
    ctx->pc = 0x2EF5BCu;
label_2ef5bc:
    // 0x2ef5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef5c0:
    // 0x2ef5c0: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
label_2ef5c4:
    if (ctx->pc == 0x2EF5C4u) {
        ctx->pc = 0x2EF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5C0u;
        // 0x2ef5c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5C8u;
        goto label_2ef5c8;
    }
    ctx->pc = 0x2EF5C0u;
    {
        const bool branch_taken_0x2ef5c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5C0u;
        // 0x2ef5c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5c0) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5C8u;
label_2ef5c8:
    // 0x2ef5c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ef5cc:
    if (ctx->pc == 0x2EF5CCu) {
        ctx->pc = 0x2EF5D0u;
        goto label_2ef5d0;
    }
    ctx->pc = 0x2EF5C8u;
    {
        const bool branch_taken_0x2ef5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef5c8) {
            ctx->pc = 0x2EF5F4u;
            goto label_2ef5f4;
        }
    }
    ctx->pc = 0x2EF5D0u;
label_2ef5d0:
    // 0x2ef5d0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ef5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2ef5d4:
    // 0x2ef5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5d8:
    // 0x2ef5d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ef5dc:
    if (ctx->pc == 0x2EF5DCu) {
        ctx->pc = 0x2EF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5D8u;
        // 0x2ef5dc: 0x8c4462c8  lw          $a0, 0x62C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5E0u;
        goto label_2ef5e0;
    }
    ctx->pc = 0x2EF5D8u;
    {
        const bool branch_taken_0x2ef5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5D8u;
        // 0x2ef5dc: 0x8c4462c8  lw          $a0, 0x62C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5d8) {
            ctx->pc = 0x2EF5E8u;
            goto label_2ef5e8;
        }
    }
    ctx->pc = 0x2EF5E0u;
label_2ef5e0:
    // 0x2ef5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5e4:
    // 0x2ef5e4: 0x8c4462f8  lw          $a0, 0x62F8($v0)
    ctx->pc = 0x2ef5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25336)));
label_2ef5e8:
    // 0x2ef5e8: 0xc09d810  jal         func_276040
label_2ef5ec:
    if (ctx->pc == 0x2EF5ECu) {
        ctx->pc = 0x2EF5F0u;
        goto label_2ef5f0;
    }
    ctx->pc = 0x2EF5E8u;
    SET_GPR_U32(ctx, 31, 0x2EF5F0u);
    ctx->pc = 0x276040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276040u, 0x2EF5E8u, 0x2EF5F0u)) {
        return;
    }
    ctx->pc = 0x2EF5F0u;
label_2ef5f0:
    // 0x2ef5f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ef5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5f4:
    // 0x2ef5f4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_2ef5f8:
    if (ctx->pc == 0x2EF5F8u) {
        ctx->pc = 0x2EF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F4u;
        // 0x2ef5f8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5FCu;
        goto label_2ef5fc;
    }
    ctx->pc = 0x2EF5F4u;
    {
        const bool branch_taken_0x2ef5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F4u;
        // 0x2ef5f8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5f4) {
            ctx->pc = 0x2EF650u;
            goto label_2ef650;
        }
    }
    ctx->pc = 0x2EF5FCu;
label_2ef5fc:
    // 0x2ef5fc: 0x8f8490ac  lw          $a0, -0x6F54($gp)
    ctx->pc = 0x2ef5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_2ef600:
    // 0x2ef600: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x2ef600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_2ef604:
    // 0x2ef604: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ef604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ef608:
    // 0x2ef608: 0x40f809  jalr        $v0
label_2ef60c:
    if (ctx->pc == 0x2EF60Cu) {
        ctx->pc = 0x2EF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF608u;
        // 0x2ef60c: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF610u;
        goto label_2ef610;
    }
    ctx->pc = 0x2EF608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF610u);
        ctx->pc = 0x2EF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF608u;
        // 0x2ef60c: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF608u, 0x2EF610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF610u;
label_2ef610:
    // 0x2ef610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef614:
    // 0x2ef614: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2ef618:
    if (ctx->pc == 0x2EF618u) {
        ctx->pc = 0x2EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF614u;
        // 0x2ef618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF61Cu;
        goto label_2ef61c;
    }
    ctx->pc = 0x2EF614u;
    {
        const bool branch_taken_0x2ef614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF614u;
        // 0x2ef618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef614) {
            ctx->pc = 0x2EF650u;
            goto label_2ef650;
        }
    }
    ctx->pc = 0x2EF61Cu;
label_2ef61c:
    // 0x2ef61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef620:
    // 0x2ef620: 0xc0c4bea  jal         func_312FA8
label_2ef624:
    if (ctx->pc == 0x2EF624u) {
        ctx->pc = 0x2EF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF620u;
        // 0x2ef624: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF628u;
        goto label_2ef628;
    }
    ctx->pc = 0x2EF620u;
    SET_GPR_U32(ctx, 31, 0x2EF628u);
    ctx->pc = 0x2EF624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF620u;
    // 0x2ef624: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x2EF620u, 0x2EF628u)) {
        return;
    }
    ctx->pc = 0x2EF628u;
label_2ef628:
    // 0x2ef628: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x2ef628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
label_2ef62c:
    // 0x2ef62c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef630:
    // 0x2ef630: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2ef634:
    // 0x2ef634: 0xc075fdc  jal         func_1D7F70
label_2ef638:
    if (ctx->pc == 0x2EF638u) {
        ctx->pc = 0x2EF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF634u;
        // 0x2ef638: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF63Cu;
        goto label_2ef63c;
    }
    ctx->pc = 0x2EF634u;
    SET_GPR_U32(ctx, 31, 0x2EF63Cu);
    ctx->pc = 0x2EF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF634u;
    // 0x2ef638: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2EF634u, 0x2EF63Cu)) {
        return;
    }
    ctx->pc = 0x2EF63Cu;
label_2ef63c:
    // 0x2ef63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef640:
    // 0x2ef640: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x2ef640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_2ef644:
    // 0x2ef644: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2ef644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_2ef648:
    // 0x2ef648: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ef64c:
    if (ctx->pc == 0x2EF64Cu) {
        ctx->pc = 0x2EF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF648u;
        // 0x2ef64c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF650u;
        goto label_2ef650;
    }
    ctx->pc = 0x2EF648u;
    {
        const bool branch_taken_0x2ef648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF648u;
        // 0x2ef64c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef648) {
            ctx->pc = 0x2EF654u;
            goto label_2ef654;
        }
    }
    ctx->pc = 0x2EF650u;
label_2ef650:
    // 0x2ef650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef654:
    // 0x2ef654: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ef654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef658:
    // 0x2ef658: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ef658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ef65c:
    // 0x2ef65c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ef65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ef660:
    // 0x2ef660: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ef660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef664:
    // 0x2ef664: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ef664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef668:
    // 0x2ef668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef66c:
    // 0x2ef66c: 0x3e00008  jr          $ra
label_2ef670:
    if (ctx->pc == 0x2EF670u) {
        ctx->pc = 0x2EF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF66Cu;
        // 0x2ef670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF674u;
        goto label_2ef674;
    }
    ctx->pc = 0x2EF66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF66Cu;
        // 0x2ef670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF674u;
label_2ef674:
    // 0x2ef674: 0x0  nop
    ctx->pc = 0x2ef674u;
    // NOP
    ctx->pc = 0x2ef678u;
}
