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

// Function: sub_00248250
// Address: 0x248250 - 0x248558
void sub_00248250_0x248250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248250_0x248250");
#endif

    switch (ctx->pc) {
        case 0x24828cu: goto label_24828c;
        case 0x248398u: goto label_248398;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483e4u: goto label_2483e4;
        case 0x248530u: goto label_248530;
        case 0x24853cu: goto label_24853c;
        default: break;
    }

    ctx->pc = 0x248250u;

    // 0x248250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x248254: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248258: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24825c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x248260: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x248260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x248264: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x248264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x248268: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x248268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24826c: 0x26330fc8  addiu       $s3, $s1, 0xFC8
    ctx->pc = 0x24826cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x248270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248274: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x248274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x248278: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x248278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24827c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24827cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248280: 0x8c50004c  lw          $s0, 0x4C($v0)
    ctx->pc = 0x248280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x248284: 0xc092402  jal         func_249008
    ctx->pc = 0x248284u;
    SET_GPR_U32(ctx, 31, 0x24828Cu);
    ctx->pc = 0x248288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248284u;
    // 0x248288: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249008u, 0x248284u, 0x24828Cu)) {
        return;
    }
    ctx->pc = 0x24828Cu;
label_24828c:
    // 0x24828c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x24828Cu;
    {
        const bool branch_taken_0x24828c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x248290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24828Cu;
        // 0x248290: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24828c) {
            ctx->pc = 0x2483C8u;
            goto label_2483c8;
        }
    }
    ctx->pc = 0x248294u;
    // 0x248294: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x248294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x248298: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x248298u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24829c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2482a0: 0x24500054  addiu       $s0, $v0, 0x54
    ctx->pc = 0x2482a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2482a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2482a8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2482ac: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x2482acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x2482b0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2482b4: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x2482b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2482b8: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2482B8u;
    {
        const bool branch_taken_0x2482b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482B8u;
        // 0x2482bc: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482b8) {
            ctx->pc = 0x248384u;
            goto label_248384;
        }
    }
    ctx->pc = 0x2482C0u;
    // 0x2482c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2482c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2482c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2482c8: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x2482c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x2482cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2482d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2482d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2482d4: 0x800008  jr          $a0
    ctx->pc = 0x2482D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2482DCu: goto label_2482dc;
            case 0x2482F8u: goto label_2482f8;
            case 0x248314u: goto label_248314;
            case 0x248330u: goto label_248330;
            case 0x24834Cu: goto label_24834c;
            case 0x248368u: goto label_248368;
            case 0x248384u: goto label_248384;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2482DCu;
label_2482dc:
    // 0x2482dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2482dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2482e0: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2482e4: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x2482e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x2482e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2482e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2482ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2482ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2482f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2482F0u;
    {
        const bool branch_taken_0x2482f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482F0u;
        // 0x2482f4: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482f0) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x2482F8u;
label_2482f8:
    // 0x2482f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2482f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2482fc: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x2482fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248300: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x248300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x248304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248308: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x248308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24830c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24830Cu;
    {
        const bool branch_taken_0x24830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24830Cu;
        // 0x248310: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24830c) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248314u;
label_248314:
    // 0x248314: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248318: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24831c: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x24831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x248320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248324: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x248324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x248328: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x248328u;
    {
        const bool branch_taken_0x248328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248328u;
        // 0x24832c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248328) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248330u;
label_248330:
    // 0x248330: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248334: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248338: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x24833c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248340: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x248340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x248344: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x248344u;
    {
        const bool branch_taken_0x248344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248344u;
        // 0x248348: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248344) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x24834Cu;
label_24834c:
    // 0x24834c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248350: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248354: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x248354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x248358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24835c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x248360: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x248360u;
    {
        const bool branch_taken_0x248360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248360u;
        // 0x248364: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248360) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248368u;
label_248368:
    // 0x248368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24836c: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x24836cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248370: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x248370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    // 0x248374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248378: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x248378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24837c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24837Cu;
    {
        const bool branch_taken_0x24837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24837Cu;
        // 0x248380: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24837c) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248384u;
label_248384:
    // 0x248384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248388: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x248388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x24838c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248390: 0xc092848  jal         func_24A120
    ctx->pc = 0x248390u;
    SET_GPR_U32(ctx, 31, 0x248398u);
    ctx->pc = 0x248394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248390u;
    // 0x248394: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x248390u, 0x248398u)) {
        return;
    }
    ctx->pc = 0x248398u;
label_248398:
    // 0x248398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x248398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24839c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24839Cu;
    SET_GPR_U32(ctx, 31, 0x2483A4u);
    ctx->pc = 0x2483A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24839Cu;
    // 0x2483a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24839Cu, 0x2483A4u)) {
        return;
    }
    ctx->pc = 0x2483A4u;
label_2483a4:
    // 0x2483a4: 0x0  nop
    ctx->pc = 0x2483a4u;
    // NOP
label_2483a8:
    // 0x2483a8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2483ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2483acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483b0: 0xc09240e  jal         func_249038
    ctx->pc = 0x2483B0u;
    SET_GPR_U32(ctx, 31, 0x2483B8u);
    ctx->pc = 0x2483B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483B0u;
    // 0x2483b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x2483B0u, 0x2483B8u)) {
        return;
    }
    ctx->pc = 0x2483B8u;
label_2483b8:
    // 0x2483b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2483B8u;
    {
        const bool branch_taken_0x2483b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483B8u;
        // 0x2483bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483b8) {
            ctx->pc = 0x2483E8u;
            goto label_2483e8;
        }
    }
    ctx->pc = 0x2483C0u;
    // 0x2483c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2483C0u;
    {
        const bool branch_taken_0x2483c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483C0u;
        // 0x2483c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483c0) {
            ctx->pc = 0x2483F0u;
            goto label_2483f0;
        }
    }
    ctx->pc = 0x2483C8u;
label_2483c8:
    // 0x2483c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2483cc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2483d0: 0xc092848  jal         func_24A120
    ctx->pc = 0x2483D0u;
    SET_GPR_U32(ctx, 31, 0x2483D8u);
    ctx->pc = 0x2483D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483D0u;
    // 0x2483d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2483D0u, 0x2483D8u)) {
        return;
    }
    ctx->pc = 0x2483D8u;
label_2483d8:
    // 0x2483d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2483d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483dc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2483DCu;
    SET_GPR_U32(ctx, 31, 0x2483E4u);
    ctx->pc = 0x2483E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483DCu;
    // 0x2483e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2483DCu, 0x2483E4u)) {
        return;
    }
    ctx->pc = 0x2483E4u;
label_2483e4:
    // 0x2483e4: 0x0  nop
    ctx->pc = 0x2483e4u;
    // NOP
label_2483e8:
    // 0x2483e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2483e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2483ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2483f0:
    // 0x2483f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2483f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2483f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2483f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2483f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2483f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2483fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2483fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248400: 0x3e00008  jr          $ra
    ctx->pc = 0x248400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248400u;
        // 0x248404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248408u;
    // 0x248408: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24840c: 0x0  nop
    ctx->pc = 0x24840cu;
    // NOP
    // 0x248410: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x248414: 0x0  nop
    ctx->pc = 0x248414u;
    // NOP
    // 0x248418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x248418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24841c: 0x0  nop
    ctx->pc = 0x24841cu;
    // NOP
    // 0x248420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248424: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x248424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x248428: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x248428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24842c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x24842cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x248430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248434: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x248434u;
    {
        const bool branch_taken_0x248434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248434u;
        // 0x248438: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248434) {
            ctx->pc = 0x24851Cu;
            goto label_24851c;
        }
    }
    ctx->pc = 0x24843Cu;
    // 0x24843c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248444: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x248448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24844c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248450: 0x800008  jr          $a0
    ctx->pc = 0x248450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248458u: goto label_248458;
            case 0x248474u: goto label_248474;
            case 0x248490u: goto label_248490;
            case 0x2484ACu: goto label_2484ac;
            case 0x2484C8u: goto label_2484c8;
            case 0x2484E4u: goto label_2484e4;
            case 0x248500u: goto label_248500;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248450u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248458u;
label_248458:
    // 0x248458: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24845c: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x24845cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248460: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248464: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24846c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x24846Cu;
    {
        const bool branch_taken_0x24846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24846Cu;
        // 0x248470: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24846c) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248474u;
label_248474:
    // 0x248474: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248478: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24847c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248480: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248488: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x248488u;
    {
        const bool branch_taken_0x248488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248488u;
        // 0x24848c: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248488) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248490u;
label_248490:
    // 0x248490: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248494: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248498: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24849c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2484a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2484a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2484a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2484A4u;
    {
        const bool branch_taken_0x2484a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484A4u;
        // 0x2484a8: 0x8c70000c  lw          $s0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484a4) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x2484ACu;
label_2484ac:
    // 0x2484ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2484b0: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2484b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2484b4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2484b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2484b8: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2484b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2484bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2484bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2484c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2484C0u;
    {
        const bool branch_taken_0x2484c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c0) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2484cc: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2484ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2484d0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2484d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2484d4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2484d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2484d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2484dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2484DCu;
    {
        const bool branch_taken_0x2484dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484DCu;
        // 0x2484e0: 0x8c700014  lw          $s0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484dc) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x2484E4u;
label_2484e4:
    // 0x2484e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2484e8: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2484ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2484ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2484f0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2484f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2484f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2484f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2484f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2484F8u;
    {
        const bool branch_taken_0x2484f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F8u;
        // 0x2484fc: 0x8c700018  lw          $s0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484f8) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248500u;
label_248500:
    // 0x248500: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248504: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x248504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248508: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24850c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x248510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248514: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x248514u;
    {
        const bool branch_taken_0x248514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248514u;
        // 0x248518: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248514) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x24851Cu;
label_24851c:
    // 0x24851c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248520: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x248520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248524: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x248528: 0xc092848  jal         func_24A120
    ctx->pc = 0x248528u;
    SET_GPR_U32(ctx, 31, 0x248530u);
    ctx->pc = 0x24852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248528u;
    // 0x24852c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x248528u, 0x248530u)) {
        return;
    }
    ctx->pc = 0x248530u;
label_248530:
    // 0x248530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x248530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248534: 0xc09281a  jal         func_24A068
    ctx->pc = 0x248534u;
    SET_GPR_U32(ctx, 31, 0x24853Cu);
    ctx->pc = 0x248538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248534u;
    // 0x248538: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x248534u, 0x24853Cu)) {
        return;
    }
    ctx->pc = 0x24853Cu;
label_24853c:
    // 0x24853c: 0x0  nop
    ctx->pc = 0x24853cu;
    // NOP
label_248540:
    // 0x248540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x248540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248548: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x248548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24854c: 0x3e00008  jr          $ra
    ctx->pc = 0x24854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24854Cu;
        // 0x248550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248554u;
    // 0x248554: 0x0  nop
    ctx->pc = 0x248554u;
    // NOP
    ctx->pc = 0x248558u;
}
