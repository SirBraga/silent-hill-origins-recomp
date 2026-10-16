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

// Function: sub_00249250
// Address: 0x249250 - 0x249358
void sub_00249250_0x249250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249250_0x249250");
#endif

    switch (ctx->pc) {
        case 0x249250u: goto label_249250;
        case 0x249254u: goto label_249254;
        case 0x249258u: goto label_249258;
        case 0x24925cu: goto label_24925c;
        case 0x249260u: goto label_249260;
        case 0x249264u: goto label_249264;
        case 0x249268u: goto label_249268;
        case 0x24926cu: goto label_24926c;
        case 0x249270u: goto label_249270;
        case 0x249274u: goto label_249274;
        case 0x249278u: goto label_249278;
        case 0x24927cu: goto label_24927c;
        case 0x249280u: goto label_249280;
        case 0x249284u: goto label_249284;
        case 0x249288u: goto label_249288;
        case 0x24928cu: goto label_24928c;
        case 0x249290u: goto label_249290;
        case 0x249294u: goto label_249294;
        case 0x249298u: goto label_249298;
        case 0x24929cu: goto label_24929c;
        case 0x2492a0u: goto label_2492a0;
        case 0x2492a4u: goto label_2492a4;
        case 0x2492a8u: goto label_2492a8;
        case 0x2492acu: goto label_2492ac;
        case 0x2492b0u: goto label_2492b0;
        case 0x2492b4u: goto label_2492b4;
        case 0x2492b8u: goto label_2492b8;
        case 0x2492bcu: goto label_2492bc;
        case 0x2492c0u: goto label_2492c0;
        case 0x2492c4u: goto label_2492c4;
        case 0x2492c8u: goto label_2492c8;
        case 0x2492ccu: goto label_2492cc;
        case 0x2492d0u: goto label_2492d0;
        case 0x2492d4u: goto label_2492d4;
        case 0x2492d8u: goto label_2492d8;
        case 0x2492dcu: goto label_2492dc;
        case 0x2492e0u: goto label_2492e0;
        case 0x2492e4u: goto label_2492e4;
        case 0x2492e8u: goto label_2492e8;
        case 0x2492ecu: goto label_2492ec;
        case 0x2492f0u: goto label_2492f0;
        case 0x2492f4u: goto label_2492f4;
        case 0x2492f8u: goto label_2492f8;
        case 0x2492fcu: goto label_2492fc;
        case 0x249300u: goto label_249300;
        case 0x249304u: goto label_249304;
        case 0x249308u: goto label_249308;
        case 0x24930cu: goto label_24930c;
        case 0x249310u: goto label_249310;
        case 0x249314u: goto label_249314;
        case 0x249318u: goto label_249318;
        case 0x24931cu: goto label_24931c;
        case 0x249320u: goto label_249320;
        case 0x249324u: goto label_249324;
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        default: break;
    }

    ctx->pc = 0x249250u;

label_249250:
    // 0x249250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x249250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_249254:
    // 0x249254: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x249254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_249258:
    // 0x249258: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x249258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24925c:
    // 0x24925c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24925cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249260:
    // 0x249260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_249264:
    // 0x249264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_249268:
    // 0x249268: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x249268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24926c:
    // 0x24926c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x24926cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_249270:
    // 0x249270: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x249270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_249274:
    // 0x249274: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_249278:
    if (ctx->pc == 0x249278u) {
        ctx->pc = 0x249278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249274u;
        // 0x249278: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24927Cu;
        goto label_24927c;
    }
    ctx->pc = 0x249274u;
    {
        const bool branch_taken_0x249274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249274u;
        // 0x249278: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249274) {
            ctx->pc = 0x24931Cu;
            goto label_24931c;
        }
    }
    ctx->pc = 0x24927Cu;
label_24927c:
    // 0x24927c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x24927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_249280:
    // 0x249280: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_249284:
    // 0x249284: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x249284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
label_249288:
    // 0x249288: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_24928c:
    // 0x24928c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249290:
    // 0x249290: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_249294:
    // 0x249294: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x249294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_249298:
    // 0x249298: 0x40f809  jalr        $v0
label_24929c:
    if (ctx->pc == 0x24929Cu) {
        ctx->pc = 0x24929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249298u;
        // 0x24929c: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492A0u;
        goto label_2492a0;
    }
    ctx->pc = 0x249298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2492A0u);
        ctx->pc = 0x24929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249298u;
        // 0x24929c: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249298u, 0x2492A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2492A0u;
label_2492a0:
    // 0x2492a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2492a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2492a4:
    // 0x2492a4: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
label_2492a8:
    if (ctx->pc == 0x2492A8u) {
        ctx->pc = 0x2492A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492A4u;
        // 0x2492a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492ACu;
        goto label_2492ac;
    }
    ctx->pc = 0x2492A4u;
    {
        const bool branch_taken_0x2492a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492a4) {
            ctx->pc = 0x2492A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492A4u;
            // 0x2492a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2492E8u;
            goto label_2492e8;
        }
    }
    ctx->pc = 0x2492ACu;
label_2492ac:
    // 0x2492ac: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2492b0:
    // 0x2492b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2492b4:
    // 0x2492b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2492b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2492b8:
    // 0x2492b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2492b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2492bc:
    // 0x2492bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2492bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2492c0:
    // 0x2492c0: 0xc092848  jal         func_24A120
label_2492c4:
    if (ctx->pc == 0x2492C4u) {
        ctx->pc = 0x2492C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492C0u;
        // 0x2492c4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492C8u;
        goto label_2492c8;
    }
    ctx->pc = 0x2492C0u;
    SET_GPR_U32(ctx, 31, 0x2492C8u);
    ctx->pc = 0x2492C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492C0u;
    // 0x2492c4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2492C0u, 0x2492C8u)) {
        return;
    }
    ctx->pc = 0x2492C8u;
label_2492c8:
    // 0x2492c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2492c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2492cc:
    // 0x2492cc: 0xc09281a  jal         func_24A068
label_2492d0:
    if (ctx->pc == 0x2492D0u) {
        ctx->pc = 0x2492D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492CCu;
        // 0x2492d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492D4u;
        goto label_2492d4;
    }
    ctx->pc = 0x2492CCu;
    SET_GPR_U32(ctx, 31, 0x2492D4u);
    ctx->pc = 0x2492D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492CCu;
    // 0x2492d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2492CCu, 0x2492D4u)) {
        return;
    }
    ctx->pc = 0x2492D4u;
label_2492d4:
    // 0x2492d4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2492d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2492d8:
    // 0x2492d8: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2492d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2492dc:
    // 0x2492dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_2492e0:
    if (ctx->pc == 0x2492E0u) {
        ctx->pc = 0x2492E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492DCu;
        // 0x2492e0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492E4u;
        goto label_2492e4;
    }
    ctx->pc = 0x2492DCu;
    {
        const bool branch_taken_0x2492dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2492E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492DCu;
        // 0x2492e0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492dc) {
            ctx->pc = 0x24931Cu;
            goto label_24931c;
        }
    }
    ctx->pc = 0x2492E4u;
label_2492e4:
    // 0x2492e4: 0x0  nop
    ctx->pc = 0x2492e4u;
    // NOP
label_2492e8:
    // 0x2492e8: 0x5242000c  beql        $s2, $v0, . + 4 + (0xC << 2)
label_2492ec:
    if (ctx->pc == 0x2492ECu) {
        ctx->pc = 0x2492ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492E8u;
        // 0x2492ec: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492F0u;
        goto label_2492f0;
    }
    ctx->pc = 0x2492E8u;
    {
        const bool branch_taken_0x2492e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2492e8) {
            ctx->pc = 0x2492ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492E8u;
            // 0x2492ec: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24931Cu;
            goto label_24931c;
        }
    }
    ctx->pc = 0x2492F0u;
label_2492f0:
    // 0x2492f0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2492f4:
    if (ctx->pc == 0x2492F4u) {
        ctx->pc = 0x2492F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492F0u;
        // 0x2492f4: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492F8u;
        goto label_2492f8;
    }
    ctx->pc = 0x2492F0u;
    {
        const bool branch_taken_0x2492f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2492f0) {
            ctx->pc = 0x2492F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2492F0u;
            // 0x2492f4: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24931Cu;
            goto label_24931c;
        }
    }
    ctx->pc = 0x2492F8u;
label_2492f8:
    // 0x2492f8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2492f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2492fc:
    // 0x2492fc: 0x0  nop
    ctx->pc = 0x2492fcu;
    // NOP
label_249300:
    // 0x249300: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_249304:
    // 0x249304: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x249304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_249308:
    // 0x249308: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x249308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_24930c:
    // 0x24930c: 0x0  nop
    ctx->pc = 0x24930cu;
    // NOP
label_249310:
    // 0x249310: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_249314:
    if (ctx->pc == 0x249314u) {
        ctx->pc = 0x249314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249310u;
        // 0x249314: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249318u;
        goto label_249318;
    }
    ctx->pc = 0x249310u;
    {
        const bool branch_taken_0x249310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x249314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249310u;
        // 0x249314: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249310) {
            ctx->pc = 0x249300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249300;
        }
    }
    ctx->pc = 0x249318u;
label_249318:
    // 0x249318: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x249318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_24931c:
    // 0x24931c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_249320:
    if (ctx->pc == 0x249320u) {
        ctx->pc = 0x249320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24931Cu;
        // 0x249320: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249324u;
        goto label_249324;
    }
    ctx->pc = 0x24931Cu;
    {
        const bool branch_taken_0x24931c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24931Cu;
        // 0x249320: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24931c) {
            ctx->pc = 0x24933Cu;
            goto label_24933c;
        }
    }
    ctx->pc = 0x249324u;
label_249324:
    // 0x249324: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x249324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_249328:
    // 0x249328: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x249328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24932c:
    // 0x24932c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249330:
    // 0x249330: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_249334:
    // 0x249334: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x249334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_249338:
    // 0x249338: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x249338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24933c:
    // 0x24933c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24933cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249340:
    // 0x249340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x249340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_249344:
    // 0x249344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249348:
    // 0x249348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24934c:
    // 0x24934c: 0x3e00008  jr          $ra
label_249350:
    if (ctx->pc == 0x249350u) {
        ctx->pc = 0x249350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24934Cu;
        // 0x249350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249354u;
        goto label_249354;
    }
    ctx->pc = 0x24934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24934Cu;
        // 0x249350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249354u;
label_249354:
    // 0x249354: 0x0  nop
    ctx->pc = 0x249354u;
    // NOP
    ctx->pc = 0x249358u;
}
