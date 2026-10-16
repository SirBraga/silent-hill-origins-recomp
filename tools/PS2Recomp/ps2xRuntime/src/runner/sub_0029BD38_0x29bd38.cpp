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

// Function: sub_0029BD38
// Address: 0x29bd38 - 0x29be08
void sub_0029BD38_0x29bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BD38_0x29bd38");
#endif

    switch (ctx->pc) {
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bde4u: goto label_29bde4;
        default: break;
    }

    ctx->pc = 0x29bd38u;

    // 0x29bd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29bd44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29bd4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bd50: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x29bd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29bd54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29BD54u;
    {
        const bool branch_taken_0x29bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD54u;
        // 0x29bd58: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd54) {
            ctx->pc = 0x29BD80u;
            goto label_29bd80;
        }
    }
    ctx->pc = 0x29BD5Cu;
    // 0x29bd5c: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x29BD5Cu;
    SET_GPR_U32(ctx, 31, 0x29BD64u);
    ctx->pc = 0x29BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD5Cu;
    // 0x29bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29BD5Cu, 0x29BD64u)) {
        return;
    }
    ctx->pc = 0x29BD64u;
label_29bd64:
    // 0x29bd64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29bd68: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BD68u;
    {
        const bool branch_taken_0x29bd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29bd68) {
            ctx->pc = 0x29BD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BD68u;
            // 0x29bd6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BD78u;
            goto label_29bd78;
        }
    }
    ctx->pc = 0x29BD70u;
    // 0x29bd70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29BD70u;
    {
        const bool branch_taken_0x29bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD70u;
        // 0x29bd74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd70) {
            ctx->pc = 0x29BDA8u;
            goto label_29bda8;
        }
    }
    ctx->pc = 0x29BD78u;
label_29bd78:
    // 0x29bd78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bd7c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x29bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29bd80:
    // 0x29bd80: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x29bd80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29bd84: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BD84u;
    {
        const bool branch_taken_0x29bd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD84u;
        // 0x29bd88: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd84) {
            ctx->pc = 0x29BDA0u;
            goto label_29bda0;
        }
    }
    ctx->pc = 0x29BD8Cu;
    // 0x29bd8c: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x29BD8Cu;
    SET_GPR_U32(ctx, 31, 0x29BD94u);
    ctx->pc = 0x29BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD8Cu;
    // 0x29bd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29BD8Cu, 0x29BD94u)) {
        return;
    }
    ctx->pc = 0x29BD94u;
label_29bd94:
    // 0x29bd94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29bd98: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BD98u;
    {
        const bool branch_taken_0x29bd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29bd98) {
            ctx->pc = 0x29BD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BD98u;
            // 0x29bd9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BDA8u;
            goto label_29bda8;
        }
    }
    ctx->pc = 0x29BDA0u;
label_29bda0:
    // 0x29bda0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29bda4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29bda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29bda8:
    // 0x29bda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29bdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x29BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDB0u;
        // 0x29bdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BDB8u;
label_29bdb8:
    // 0x29bdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29bdc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29bdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29bdcc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29bdd0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29bdd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29bdd4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BDD4u;
    {
        const bool branch_taken_0x29bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bdd4) {
            ctx->pc = 0x29BDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29BDD4u;
            // 0x29bdd8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BDF8u;
            goto label_29bdf8;
        }
    }
    ctx->pc = 0x29BDDCu;
    // 0x29bddc: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x29BDDCu;
    SET_GPR_U32(ctx, 31, 0x29BDE4u);
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29BDDCu, 0x29BDE4u)) {
        return;
    }
    ctx->pc = 0x29BDE4u;
label_29bde4:
    // 0x29bde4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29bde8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BDE8u;
    {
        const bool branch_taken_0x29bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDE8u;
        // 0x29bdec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bde8) {
            ctx->pc = 0x29BDF8u;
            goto label_29bdf8;
        }
    }
    ctx->pc = 0x29BDF0u;
    // 0x29bdf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29bdf4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29bdf8:
    // 0x29bdf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29bdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29be00: 0x3e00008  jr          $ra
    ctx->pc = 0x29BE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE00u;
        // 0x29be04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BE08u;
}
