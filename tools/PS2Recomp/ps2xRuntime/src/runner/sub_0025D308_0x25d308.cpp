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

// Function: sub_0025D308
// Address: 0x25d308 - 0x25d378
void sub_0025D308_0x25d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D308_0x25d308");
#endif

    switch (ctx->pc) {
        case 0x25d308u: goto label_25d308;
        case 0x25d30cu: goto label_25d30c;
        case 0x25d310u: goto label_25d310;
        case 0x25d314u: goto label_25d314;
        case 0x25d318u: goto label_25d318;
        case 0x25d31cu: goto label_25d31c;
        case 0x25d320u: goto label_25d320;
        case 0x25d324u: goto label_25d324;
        case 0x25d328u: goto label_25d328;
        case 0x25d32cu: goto label_25d32c;
        case 0x25d330u: goto label_25d330;
        case 0x25d334u: goto label_25d334;
        case 0x25d338u: goto label_25d338;
        case 0x25d33cu: goto label_25d33c;
        case 0x25d340u: goto label_25d340;
        case 0x25d344u: goto label_25d344;
        case 0x25d348u: goto label_25d348;
        case 0x25d34cu: goto label_25d34c;
        case 0x25d350u: goto label_25d350;
        case 0x25d354u: goto label_25d354;
        case 0x25d358u: goto label_25d358;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d360u: goto label_25d360;
        case 0x25d364u: goto label_25d364;
        case 0x25d368u: goto label_25d368;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d370u: goto label_25d370;
        case 0x25d374u: goto label_25d374;
        default: break;
    }

    ctx->pc = 0x25d308u;

label_25d308:
    // 0x25d308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25d30c:
    // 0x25d30c: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x25d30cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
label_25d310:
    // 0x25d310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d314:
    // 0x25d314: 0x25080fc8  addiu       $t0, $t0, 0xFC8
    ctx->pc = 0x25d314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4040));
label_25d318:
    // 0x25d318: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25d318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d31c:
    // 0x25d31c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x25d31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_25d320:
    // 0x25d320: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25d324:
    // 0x25d324: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x25d324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_25d328:
    // 0x25d328: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25d32c:
    // 0x25d32c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x25d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_25d330:
    // 0x25d330: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25d330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_25d334:
    // 0x25d334: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x25d334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d338:
    // 0x25d338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d33c:
    // 0x25d33c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x25d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_25d340:
    // 0x25d340: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x25d340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25d344:
    // 0x25d344: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25d348:
    // 0x25d348: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x25d348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_25d34c:
    // 0x25d34c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25d350:
    // 0x25d350: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16360)));
label_25d354:
    // 0x25d354: 0x8d02011c  lw          $v0, 0x11C($t0)
    ctx->pc = 0x25d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 284)));
label_25d358:
    // 0x25d358: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x25d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_25d35c:
    // 0x25d35c: 0x40f809  jalr        $v0
label_25d360:
    if (ctx->pc == 0x25D360u) {
        ctx->pc = 0x25D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D35Cu;
        // 0x25d360: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D364u;
        goto label_25d364;
    }
    ctx->pc = 0x25D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D364u);
        ctx->pc = 0x25D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D35Cu;
        // 0x25d360: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D35Cu, 0x25D364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D364u;
label_25d364:
    // 0x25d364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d368:
    // 0x25d368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d36c:
    // 0x25d36c: 0x3e00008  jr          $ra
label_25d370:
    if (ctx->pc == 0x25D370u) {
        ctx->pc = 0x25D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D36Cu;
        // 0x25d370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D374u;
        goto label_25d374;
    }
    ctx->pc = 0x25D36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D36Cu;
        // 0x25d370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D374u;
label_25d374:
    // 0x25d374: 0x0  nop
    ctx->pc = 0x25d374u;
    // NOP
    ctx->pc = 0x25d378u;
}
