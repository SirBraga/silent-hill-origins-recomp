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

// Function: sub_002002C8
// Address: 0x2002c8 - 0x200368
void sub_002002C8_0x2002c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002002C8_0x2002c8");
#endif

    switch (ctx->pc) {
        case 0x2002c8u: goto label_2002c8;
        case 0x2002ccu: goto label_2002cc;
        case 0x2002d0u: goto label_2002d0;
        case 0x2002d4u: goto label_2002d4;
        case 0x2002d8u: goto label_2002d8;
        case 0x2002dcu: goto label_2002dc;
        case 0x2002e0u: goto label_2002e0;
        case 0x2002e4u: goto label_2002e4;
        case 0x2002e8u: goto label_2002e8;
        case 0x2002ecu: goto label_2002ec;
        case 0x2002f0u: goto label_2002f0;
        case 0x2002f4u: goto label_2002f4;
        case 0x2002f8u: goto label_2002f8;
        case 0x2002fcu: goto label_2002fc;
        case 0x200300u: goto label_200300;
        case 0x200304u: goto label_200304;
        case 0x200308u: goto label_200308;
        case 0x20030cu: goto label_20030c;
        case 0x200310u: goto label_200310;
        case 0x200314u: goto label_200314;
        case 0x200318u: goto label_200318;
        case 0x20031cu: goto label_20031c;
        case 0x200320u: goto label_200320;
        case 0x200324u: goto label_200324;
        case 0x200328u: goto label_200328;
        case 0x20032cu: goto label_20032c;
        case 0x200330u: goto label_200330;
        case 0x200334u: goto label_200334;
        case 0x200338u: goto label_200338;
        case 0x20033cu: goto label_20033c;
        case 0x200340u: goto label_200340;
        case 0x200344u: goto label_200344;
        case 0x200348u: goto label_200348;
        case 0x20034cu: goto label_20034c;
        case 0x200350u: goto label_200350;
        case 0x200354u: goto label_200354;
        case 0x200358u: goto label_200358;
        case 0x20035cu: goto label_20035c;
        case 0x200360u: goto label_200360;
        case 0x200364u: goto label_200364;
        default: break;
    }

    ctx->pc = 0x2002c8u;

label_2002c8:
    // 0x2002c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2002cc:
    // 0x2002cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2002ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2002d0:
    // 0x2002d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2002d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2002d4:
    // 0x2002d4: 0xc067204  jal         func_19C810
label_2002d8:
    if (ctx->pc == 0x2002D8u) {
        ctx->pc = 0x2002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002D4u;
        // 0x2002d8: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002DCu;
        goto label_2002dc;
    }
    ctx->pc = 0x2002D4u;
    SET_GPR_U32(ctx, 31, 0x2002DCu);
    ctx->pc = 0x2002D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002D4u;
    // 0x2002d8: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C810u, 0x2002D4u, 0x2002DCu)) {
        return;
    }
    ctx->pc = 0x2002DCu;
label_2002dc:
    // 0x2002dc: 0xc076738  jal         func_1D9CE0
label_2002e0:
    if (ctx->pc == 0x2002E0u) {
        ctx->pc = 0x2002E4u;
        goto label_2002e4;
    }
    ctx->pc = 0x2002DCu;
    SET_GPR_U32(ctx, 31, 0x2002E4u);
    ctx->pc = 0x1D9CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9CE0u, 0x2002DCu, 0x2002E4u)) {
        return;
    }
    ctx->pc = 0x2002E4u;
label_2002e4:
    // 0x2002e4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_2002e8:
    // 0x2002e8: 0x8cc22cd0  lw          $v0, 0x2CD0($a2)
    ctx->pc = 0x2002e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11472)));
label_2002ec:
    // 0x2002ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2002f0:
    if (ctx->pc == 0x2002F0u) {
        ctx->pc = 0x2002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002ECu;
        // 0x2002f0: 0x26022cc0  addiu       $v0, $s0, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002F4u;
        goto label_2002f4;
    }
    ctx->pc = 0x2002ECu;
    {
        const bool branch_taken_0x2002ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002ECu;
        // 0x2002f0: 0x26022cc0  addiu       $v0, $s0, 0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002ec) {
            ctx->pc = 0x200328u;
            goto label_200328;
        }
    }
    ctx->pc = 0x2002F4u;
label_2002f4:
    // 0x2002f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2002f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2002f8:
    // 0x2002f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2002f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2002fc:
    // 0x2002fc: 0x26052cc0  addiu       $a1, $s0, 0x2CC0
    ctx->pc = 0x2002fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_200300:
    // 0x200300: 0xacc32cd0  sw          $v1, 0x2CD0($a2)
    ctx->pc = 0x200300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11472), GPR_U32(ctx, 3));
label_200304:
    // 0x200304: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x200304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
label_200308:
    // 0x200308: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x200308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_20030c:
    // 0x20030c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x20030cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_200310:
    // 0x200310: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_200314:
    // 0x200314: 0xae002cc0  sw          $zero, 0x2CC0($s0)
    ctx->pc = 0x200314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11456), GPR_U32(ctx, 0));
label_200318:
    // 0x200318: 0x24840948  addiu       $a0, $a0, 0x948
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2376));
label_20031c:
    // 0x20031c: 0xc0c53ae  jal         func_314EB8
label_200320:
    if (ctx->pc == 0x200320u) {
        ctx->pc = 0x200320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20031Cu;
        // 0x200320: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200324u;
        goto label_200324;
    }
    ctx->pc = 0x20031Cu;
    SET_GPR_U32(ctx, 31, 0x200324u);
    ctx->pc = 0x200320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20031Cu;
    // 0x200320: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x20031Cu, 0x200324u)) {
        return;
    }
    ctx->pc = 0x200324u;
label_200324:
    // 0x200324: 0x26022cc0  addiu       $v0, $s0, 0x2CC0
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_200328:
    // 0x200328: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20032c:
    // 0x20032c: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_200330:
    if (ctx->pc == 0x200330u) {
        ctx->pc = 0x200330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20032Cu;
        // 0x200330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200334u;
        goto label_200334;
    }
    ctx->pc = 0x20032Cu;
    {
        const bool branch_taken_0x20032c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20032c) {
            ctx->pc = 0x200330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20032Cu;
            // 0x200330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20035Cu;
            goto label_20035c;
        }
    }
    ctx->pc = 0x200334u;
label_200334:
    // 0x200334: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x200334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200338:
    // 0x200338: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_20033c:
    // 0x20033c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_200340:
    // 0x200340: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_200344:
    // 0x200344: 0x60f809  jalr        $v1
label_200348:
    if (ctx->pc == 0x200348u) {
        ctx->pc = 0x200348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200344u;
        // 0x200348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20034Cu;
        goto label_20034c;
    }
    ctx->pc = 0x200344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20034Cu);
        ctx->pc = 0x200348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200344u;
        // 0x200348: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200344u, 0x20034Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20034Cu;
label_20034c:
    // 0x20034c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200350:
    // 0x200350: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_200354:
    if (ctx->pc == 0x200354u) {
        ctx->pc = 0x200354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200350u;
        // 0x200354: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200358u;
        goto label_200358;
    }
    ctx->pc = 0x200350u;
    {
        const bool branch_taken_0x200350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x200350) {
            ctx->pc = 0x200354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200350u;
            // 0x200354: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200338;
        }
    }
    ctx->pc = 0x200358u;
label_200358:
    // 0x200358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20035c:
    // 0x20035c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200360:
    // 0x200360: 0x3e00008  jr          $ra
label_200364:
    if (ctx->pc == 0x200364u) {
        ctx->pc = 0x200364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200360u;
        // 0x200364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200368u;
        goto label_fallthrough_0x200360;
    }
    ctx->pc = 0x200360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200360u;
        // 0x200364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200360:
    ctx->pc = 0x200368u;
}
