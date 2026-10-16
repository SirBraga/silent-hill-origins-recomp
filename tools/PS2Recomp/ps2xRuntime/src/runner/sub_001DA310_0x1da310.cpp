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

// Function: sub_001DA310
// Address: 0x1da310 - 0x1da448
void sub_001DA310_0x1da310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA310_0x1da310");
#endif

    switch (ctx->pc) {
        case 0x1da32cu: goto label_1da32c;
        case 0x1da348u: goto label_1da348;
        case 0x1da360u: goto label_1da360;
        case 0x1da370u: goto label_1da370;
        case 0x1da37cu: goto label_1da37c;
        case 0x1da394u: goto label_1da394;
        case 0x1da3a0u: goto label_1da3a0;
        case 0x1da3b0u: goto label_1da3b0;
        case 0x1da3c0u: goto label_1da3c0;
        case 0x1da3d0u: goto label_1da3d0;
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da3e8u: goto label_1da3e8;
        case 0x1da3fcu: goto label_1da3fc;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da428u: goto label_1da428;
        default: break;
    }

    ctx->pc = 0x1da310u;

    // 0x1da310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da314: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da318: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da31c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da324: 0xc081808  jal         func_206020
    ctx->pc = 0x1DA324u;
    SET_GPR_U32(ctx, 31, 0x1DA32Cu);
    ctx->pc = 0x1DA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA324u;
    // 0x1da328: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206020u, 0x1DA324u, 0x1DA32Cu)) {
        return;
    }
    ctx->pc = 0x1DA32Cu;
label_1da32c:
    // 0x1da32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da330: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA330u;
    {
        const bool branch_taken_0x1da330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da330) {
            ctx->pc = 0x1DA334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA330u;
            // 0x1da334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA368u;
            goto label_1da368;
        }
    }
    ctx->pc = 0x1DA338u;
    // 0x1da338: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1da33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da340: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1DA340u;
    SET_GPR_U32(ctx, 31, 0x1DA348u);
    ctx->pc = 0x1DA344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA340u;
    // 0x1da344: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1DA340u, 0x1DA348u)) {
        return;
    }
    ctx->pc = 0x1DA348u;
label_1da348:
    // 0x1da348: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA348u;
    {
        const bool branch_taken_0x1da348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da348) {
            ctx->pc = 0x1DA34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA348u;
            // 0x1da34c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA368u;
            goto label_1da368;
        }
    }
    ctx->pc = 0x1DA350u;
    // 0x1da350: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1da354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da358: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1DA358u;
    SET_GPR_U32(ctx, 31, 0x1DA360u);
    ctx->pc = 0x1DA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA358u;
    // 0x1da35c: 0x24a51aa0  addiu       $a1, $a1, 0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1DA358u, 0x1DA360u)) {
        return;
    }
    ctx->pc = 0x1DA360u;
label_1da360:
    // 0x1da360: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DA360u;
    {
        const bool branch_taken_0x1da360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA360u;
        // 0x1da364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da360) {
            ctx->pc = 0x1DA3C8u;
            goto label_1da3c8;
        }
    }
    ctx->pc = 0x1DA368u;
label_1da368:
    // 0x1da368: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1DA368u;
    SET_GPR_U32(ctx, 31, 0x1DA370u);
    ctx->pc = 0x1DA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA368u;
    // 0x1da36c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1DA368u, 0x1DA370u)) {
        return;
    }
    ctx->pc = 0x1DA370u;
label_1da370:
    // 0x1da370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da374: 0xc080572  jal         func_2015C8
    ctx->pc = 0x1DA374u;
    SET_GPR_U32(ctx, 31, 0x1DA37Cu);
    ctx->pc = 0x1DA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA374u;
    // 0x1da378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x1DA374u, 0x1DA37Cu)) {
        return;
    }
    ctx->pc = 0x1DA37Cu;
label_1da37c:
    // 0x1da37c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1da380: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da384: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x1da384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x1da388: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x1da388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x1da38c: 0xc081808  jal         func_206020
    ctx->pc = 0x1DA38Cu;
    SET_GPR_U32(ctx, 31, 0x1DA394u);
    ctx->pc = 0x1DA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA38Cu;
    // 0x1da390: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206020u, 0x1DA38Cu, 0x1DA394u)) {
        return;
    }
    ctx->pc = 0x1DA394u;
label_1da394:
    // 0x1da394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da398: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1DA398u;
    SET_GPR_U32(ctx, 31, 0x1DA3A0u);
    ctx->pc = 0x1DA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA398u;
    // 0x1da39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1DA398u, 0x1DA3A0u)) {
        return;
    }
    ctx->pc = 0x1DA3A0u;
label_1da3a0:
    // 0x1da3a0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1da3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1da3a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3a8: 0xc07689e  jal         func_1DA278
    ctx->pc = 0x1DA3A8u;
    SET_GPR_U32(ctx, 31, 0x1DA3B0u);
    ctx->pc = 0x1DA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3A8u;
    // 0x1da3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA278u, 0x1DA3A8u, 0x1DA3B0u)) {
        return;
    }
    ctx->pc = 0x1DA3B0u;
label_1da3b0:
    // 0x1da3b0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DA3B0u;
    {
        const bool branch_taken_0x1da3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da3b0) {
            ctx->pc = 0x1DA3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA3B0u;
            // 0x1da3b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA42Cu;
            goto label_1da42c;
        }
    }
    ctx->pc = 0x1DA3B8u;
    // 0x1da3b8: 0xc076534  jal         func_1D94D0
    ctx->pc = 0x1DA3B8u;
    SET_GPR_U32(ctx, 31, 0x1DA3C0u);
    ctx->pc = 0x1DA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3B8u;
    // 0x1da3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D94D0u, 0x1DA3B8u, 0x1DA3C0u)) {
        return;
    }
    ctx->pc = 0x1DA3C0u;
label_1da3c0:
    // 0x1da3c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DA3C0u;
    {
        const bool branch_taken_0x1da3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3C0u;
        // 0x1da3c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3c0) {
            ctx->pc = 0x1DA42Cu;
            goto label_1da42c;
        }
    }
    ctx->pc = 0x1DA3C8u;
label_1da3c8:
    // 0x1da3c8: 0xc081840  jal         func_206100
    ctx->pc = 0x1DA3C8u;
    SET_GPR_U32(ctx, 31, 0x1DA3D0u);
    ctx->pc = 0x1DA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3C8u;
    // 0x1da3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206100u, 0x1DA3C8u, 0x1DA3D0u)) {
        return;
    }
    ctx->pc = 0x1DA3D0u;
label_1da3d0:
    // 0x1da3d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da3d4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1da3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1da3d8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1DA3D8u;
    SET_GPR_U32(ctx, 31, 0x1DA3E0u);
    ctx->pc = 0x1DA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3D8u;
    // 0x1da3dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1DA3D8u, 0x1DA3E0u)) {
        return;
    }
    ctx->pc = 0x1DA3E0u;
label_1da3e0:
    // 0x1da3e0: 0xc081808  jal         func_206020
    ctx->pc = 0x1DA3E0u;
    SET_GPR_U32(ctx, 31, 0x1DA3E8u);
    ctx->pc = 0x1DA3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3E0u;
    // 0x1da3e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206020u, 0x1DA3E0u, 0x1DA3E8u)) {
        return;
    }
    ctx->pc = 0x1DA3E8u;
label_1da3e8:
    // 0x1da3e8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1da3e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1da3ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1da3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3f0: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1da3f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1da3f4: 0xc080572  jal         func_2015C8
    ctx->pc = 0x1DA3F4u;
    SET_GPR_U32(ctx, 31, 0x1DA3FCu);
    ctx->pc = 0x1DA3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3F4u;
    // 0x1da3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x1DA3F4u, 0x1DA3FCu)) {
        return;
    }
    ctx->pc = 0x1DA3FCu;
label_1da3fc:
    // 0x1da3fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1da3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1da400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da404: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x1da408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da40c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1da40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1da410: 0xfe110048  sd          $s1, 0x48($s0)
    ctx->pc = 0x1da410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 17));
    // 0x1da414: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1DA414u;
    SET_GPR_U32(ctx, 31, 0x1DA41Cu);
    ctx->pc = 0x1DA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA414u;
    // 0x1da418: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1DA414u, 0x1DA41Cu)) {
        return;
    }
    ctx->pc = 0x1DA41Cu;
label_1da41c:
    // 0x1da41c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1da41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1da420: 0xc076652  jal         func_1D9948
    ctx->pc = 0x1DA420u;
    SET_GPR_U32(ctx, 31, 0x1DA428u);
    ctx->pc = 0x1DA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA420u;
    // 0x1da424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9948u, 0x1DA420u, 0x1DA428u)) {
        return;
    }
    ctx->pc = 0x1DA428u;
label_1da428:
    // 0x1da428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da42c:
    // 0x1da42c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da434: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da43c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA43Cu;
        // 0x1da440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA444u;
    // 0x1da444: 0x0  nop
    ctx->pc = 0x1da444u;
    // NOP
    ctx->pc = 0x1da448u;
}
