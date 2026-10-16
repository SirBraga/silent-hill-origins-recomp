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

// Function: sub_0029D2F0
// Address: 0x29d2f0 - 0x29d3b8
void sub_0029D2F0_0x29d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D2F0_0x29d2f0");
#endif

    switch (ctx->pc) {
        case 0x29d2f0u: goto label_29d2f0;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d2f8u: goto label_29d2f8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d300u: goto label_29d300;
        case 0x29d304u: goto label_29d304;
        case 0x29d308u: goto label_29d308;
        case 0x29d30cu: goto label_29d30c;
        case 0x29d310u: goto label_29d310;
        case 0x29d314u: goto label_29d314;
        case 0x29d318u: goto label_29d318;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d320u: goto label_29d320;
        case 0x29d324u: goto label_29d324;
        case 0x29d328u: goto label_29d328;
        case 0x29d32cu: goto label_29d32c;
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        default: break;
    }

    ctx->pc = 0x29d2f0u;

label_29d2f0:
    // 0x29d2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d2f4:
    // 0x29d2f4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29d2f8:
    // 0x29d2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d2fc:
    // 0x29d2fc: 0x8c502c10  lw          $s0, 0x2C10($v0)
    ctx->pc = 0x29d2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_29d300:
    // 0x29d300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29d304:
    // 0x29d304: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_29d308:
    if (ctx->pc == 0x29D308u) {
        ctx->pc = 0x29D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D304u;
        // 0x29d308: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D30Cu;
        goto label_29d30c;
    }
    ctx->pc = 0x29D304u;
    {
        const bool branch_taken_0x29d304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D304u;
        // 0x29d308: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d304) {
            ctx->pc = 0x29D344u;
            goto label_29d344;
        }
    }
    ctx->pc = 0x29D30Cu;
label_29d30c:
    // 0x29d30c: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x29d30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_29d310:
    // 0x29d310: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x29d310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_29d314:
    // 0x29d314: 0x0  nop
    ctx->pc = 0x29d314u;
    // NOP
label_29d318:
    // 0x29d318: 0x30420208  andi        $v0, $v0, 0x208
    ctx->pc = 0x29d318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)520);
label_29d31c:
    // 0x29d31c: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_29d320:
    if (ctx->pc == 0x29D320u) {
        ctx->pc = 0x29D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D31Cu;
        // 0x29d320: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D324u;
        goto label_29d324;
    }
    ctx->pc = 0x29D31Cu;
    {
        const bool branch_taken_0x29d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x29d31c) {
            ctx->pc = 0x29D320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D31Cu;
            // 0x29d320: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D33Cu;
            goto label_29d33c;
        }
    }
    ctx->pc = 0x29D324u;
label_29d324:
    // 0x29d324: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29d328:
    // 0x29d328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d32c:
    // 0x29d32c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29d330:
    // 0x29d330: 0x40f809  jalr        $v0
label_29d334:
    if (ctx->pc == 0x29D334u) {
        ctx->pc = 0x29D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D330u;
        // 0x29d334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D338u;
        goto label_29d338;
    }
    ctx->pc = 0x29D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D338u);
        ctx->pc = 0x29D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D330u;
        // 0x29d334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D330u, 0x29D338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D338u;
label_29d338:
    // 0x29d338: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x29d338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_29d33c:
    // 0x29d33c: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_29d340:
    if (ctx->pc == 0x29D340u) {
        ctx->pc = 0x29D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D33Cu;
        // 0x29d340: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D344u;
        goto label_29d344;
    }
    ctx->pc = 0x29D33Cu;
    {
        const bool branch_taken_0x29d33c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d33c) {
            ctx->pc = 0x29D340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D33Cu;
            // 0x29d340: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d318;
        }
    }
    ctx->pc = 0x29D344u;
label_29d344:
    // 0x29d344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d348:
    // 0x29d348: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d34c:
    // 0x29d34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d350:
    // 0x29d350: 0x3e00008  jr          $ra
label_29d354:
    if (ctx->pc == 0x29D354u) {
        ctx->pc = 0x29D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D350u;
        // 0x29d354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D358u;
        goto label_29d358;
    }
    ctx->pc = 0x29D350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D350u;
        // 0x29d354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D358u;
label_29d358:
    // 0x29d358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d35c:
    // 0x29d35c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29d360:
    // 0x29d360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d364:
    // 0x29d364: 0x8c502c10  lw          $s0, 0x2C10($v0)
    ctx->pc = 0x29d364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_29d368:
    // 0x29d368: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_29d36c:
    if (ctx->pc == 0x29D36Cu) {
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D370u;
        goto label_29d370;
    }
    ctx->pc = 0x29D368u;
    {
        const bool branch_taken_0x29d368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d368) {
            ctx->pc = 0x29D3A8u;
            goto label_29d3a8;
        }
    }
    ctx->pc = 0x29D370u;
label_29d370:
    // 0x29d370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d374:
    // 0x29d374: 0x0  nop
    ctx->pc = 0x29d374u;
    // NOP
label_29d378:
    // 0x29d378: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_29d37c:
    // 0x29d37c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_29d380:
    if (ctx->pc == 0x29D380u) {
        ctx->pc = 0x29D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D37Cu;
        // 0x29d380: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D384u;
        goto label_29d384;
    }
    ctx->pc = 0x29D37Cu;
    {
        const bool branch_taken_0x29d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d37c) {
            ctx->pc = 0x29D380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D37Cu;
            // 0x29d380: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D3A0u;
            goto label_29d3a0;
        }
    }
    ctx->pc = 0x29D384u;
label_29d384:
    // 0x29d384: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29d388:
    // 0x29d388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d38c:
    // 0x29d38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d390:
    // 0x29d390: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d394:
    // 0x29d394: 0x40f809  jalr        $v0
label_29d398:
    if (ctx->pc == 0x29D398u) {
        ctx->pc = 0x29D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D394u;
        // 0x29d398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D39Cu;
        goto label_29d39c;
    }
    ctx->pc = 0x29D394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D39Cu);
        ctx->pc = 0x29D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D394u;
        // 0x29d398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D394u, 0x29D39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D39Cu;
label_29d39c:
    // 0x29d39c: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x29d39cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_29d3a0:
    // 0x29d3a0: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_29d3a4:
    if (ctx->pc == 0x29D3A4u) {
        ctx->pc = 0x29D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3A0u;
        // 0x29d3a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3A8u;
        goto label_29d3a8;
    }
    ctx->pc = 0x29D3A0u;
    {
        const bool branch_taken_0x29d3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3a0) {
            ctx->pc = 0x29D3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D3A0u;
            // 0x29d3a4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d378;
        }
    }
    ctx->pc = 0x29D3A8u;
label_29d3a8:
    // 0x29d3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d3ac:
    // 0x29d3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d3b0:
    // 0x29d3b0: 0x3e00008  jr          $ra
label_29d3b4:
    if (ctx->pc == 0x29D3B4u) {
        ctx->pc = 0x29D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B0u;
        // 0x29d3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3B8u;
        goto label_fallthrough_0x29d3b0;
    }
    ctx->pc = 0x29D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B0u;
        // 0x29d3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d3b0:
    ctx->pc = 0x29D3B8u;
}
