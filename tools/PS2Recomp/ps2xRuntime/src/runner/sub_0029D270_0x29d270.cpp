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

// Function: sub_0029D270
// Address: 0x29d270 - 0x29d2f0
void sub_0029D270_0x29d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D270_0x29d270");
#endif

    switch (ctx->pc) {
        case 0x29d270u: goto label_29d270;
        case 0x29d274u: goto label_29d274;
        case 0x29d278u: goto label_29d278;
        case 0x29d27cu: goto label_29d27c;
        case 0x29d280u: goto label_29d280;
        case 0x29d284u: goto label_29d284;
        case 0x29d288u: goto label_29d288;
        case 0x29d28cu: goto label_29d28c;
        case 0x29d290u: goto label_29d290;
        case 0x29d294u: goto label_29d294;
        case 0x29d298u: goto label_29d298;
        case 0x29d29cu: goto label_29d29c;
        case 0x29d2a0u: goto label_29d2a0;
        case 0x29d2a4u: goto label_29d2a4;
        case 0x29d2a8u: goto label_29d2a8;
        case 0x29d2acu: goto label_29d2ac;
        case 0x29d2b0u: goto label_29d2b0;
        case 0x29d2b4u: goto label_29d2b4;
        case 0x29d2b8u: goto label_29d2b8;
        case 0x29d2bcu: goto label_29d2bc;
        case 0x29d2c0u: goto label_29d2c0;
        case 0x29d2c4u: goto label_29d2c4;
        case 0x29d2c8u: goto label_29d2c8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2d0u: goto label_29d2d0;
        case 0x29d2d4u: goto label_29d2d4;
        case 0x29d2d8u: goto label_29d2d8;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e4u: goto label_29d2e4;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2ecu: goto label_29d2ec;
        default: break;
    }

    ctx->pc = 0x29d270u;

label_29d270:
    // 0x29d270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29d274:
    // 0x29d274: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29d278:
    // 0x29d278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d27c:
    // 0x29d27c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29d280:
    // 0x29d280: 0x8c502c10  lw          $s0, 0x2C10($v0)
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_29d284:
    // 0x29d284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d288:
    // 0x29d288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29d28c:
    // 0x29d28c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_29d290:
    if (ctx->pc == 0x29D290u) {
        ctx->pc = 0x29D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D28Cu;
        // 0x29d290: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D294u;
        goto label_29d294;
    }
    ctx->pc = 0x29D28Cu;
    {
        const bool branch_taken_0x29d28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D28Cu;
        // 0x29d290: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d28c) {
            ctx->pc = 0x29D2D4u;
            goto label_29d2d4;
        }
    }
    ctx->pc = 0x29D294u;
label_29d294:
    // 0x29d294: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d298:
    // 0x29d298: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x29d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29d29c:
    // 0x29d29c: 0x0  nop
    ctx->pc = 0x29d29cu;
    // NOP
label_29d2a0:
    // 0x29d2a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29d2a4:
    // 0x29d2a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29d2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29d2a8:
    // 0x29d2a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29d2ac:
    if (ctx->pc == 0x29D2ACu) {
        ctx->pc = 0x29D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2A8u;
        // 0x29d2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2B0u;
        goto label_29d2b0;
    }
    ctx->pc = 0x29D2A8u;
    {
        const bool branch_taken_0x29d2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2A8u;
        // 0x29d2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2a8) {
            ctx->pc = 0x29D2C8u;
            goto label_29d2c8;
        }
    }
    ctx->pc = 0x29D2B0u;
label_29d2b0:
    // 0x29d2b0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29d2b4:
    // 0x29d2b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29d2b8:
    // 0x29d2b8: 0x40f809  jalr        $v0
label_29d2bc:
    if (ctx->pc == 0x29D2BCu) {
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B8u;
        // 0x29d2bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2C0u;
        goto label_29d2c0;
    }
    ctx->pc = 0x29D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D2C0u);
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B8u;
        // 0x29d2bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2B8u, 0x29D2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D2C0u;
label_29d2c0:
    // 0x29d2c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x29d2c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_29d2c4:
    // 0x29d2c4: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x29d2c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
label_29d2c8:
    // 0x29d2c8: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_29d2cc:
    // 0x29d2cc: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_29d2d0:
    if (ctx->pc == 0x29D2D0u) {
        ctx->pc = 0x29D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2CCu;
        // 0x29d2d0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2D4u;
        goto label_29d2d4;
    }
    ctx->pc = 0x29D2CCu;
    {
        const bool branch_taken_0x29d2cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d2cc) {
            ctx->pc = 0x29D2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D2CCu;
            // 0x29d2d0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d2a0;
        }
    }
    ctx->pc = 0x29D2D4u;
label_29d2d4:
    // 0x29d2d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d2d8:
    // 0x29d2d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d2dc:
    // 0x29d2dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d2e0:
    // 0x29d2e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29d2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d2e4:
    // 0x29d2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d2e8:
    // 0x29d2e8: 0x3e00008  jr          $ra
label_29d2ec:
    if (ctx->pc == 0x29D2ECu) {
        ctx->pc = 0x29D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2E8u;
        // 0x29d2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2F0u;
        goto label_fallthrough_0x29d2e8;
    }
    ctx->pc = 0x29D2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2E8u;
        // 0x29d2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d2e8:
    ctx->pc = 0x29D2F0u;
}
