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

// Function: sub_00324E88
// Address: 0x324e88 - 0x324f10
void sub_00324E88_0x324e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E88_0x324e88");
#endif

    switch (ctx->pc) {
        case 0x324ea0u: goto label_324ea0;
        case 0x324ea8u: goto label_324ea8;
        case 0x324ec8u: goto label_324ec8;
        case 0x324edcu: goto label_324edc;
        case 0x324ef8u: goto label_324ef8;
        default: break;
    }

    ctx->pc = 0x324e88u;

    // 0x324e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324e8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x324e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x324e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x324e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x324e98: 0xc0c9384  jal         func_324E10
    ctx->pc = 0x324E98u;
    SET_GPR_U32(ctx, 31, 0x324EA0u);
    ctx->pc = 0x324E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E98u;
    // 0x324e9c: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324E10u, 0x324E98u, 0x324EA0u)) {
        return;
    }
    ctx->pc = 0x324EA0u;
label_324ea0:
    // 0x324ea0: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x324EA0u;
    SET_GPR_U32(ctx, 31, 0x324EA8u);
    ctx->pc = 0x324EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EA0u;
    // 0x324ea4: 0x8e2475e8  lw          $a0, 0x75E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x324EA0u, 0x324EA8u)) {
        return;
    }
    ctx->pc = 0x324EA8u;
label_324ea8:
    // 0x324ea8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x324ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x324eac: 0x2470cfc0  addiu       $s0, $v1, -0x3040
    ctx->pc = 0x324eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x324eb0: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x324eb4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x324eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x324eb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x324EB8u;
    {
        const bool branch_taken_0x324eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EB8u;
        // 0x324ebc: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324eb8) {
            ctx->pc = 0x324EF0u;
            goto label_324ef0;
        }
    }
    ctx->pc = 0x324EC0u;
    // 0x324ec0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x324ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324ec4: 0x0  nop
    ctx->pc = 0x324ec4u;
    // NOP
label_324ec8:
    // 0x324ec8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x324EC8u;
    {
        const bool branch_taken_0x324ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ec8) {
            ctx->pc = 0x324ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324EC8u;
            // 0x324ecc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324EE4u;
            goto label_324ee4;
        }
    }
    ctx->pc = 0x324ED0u;
    // 0x324ed0: 0x8e2475e8  lw          $a0, 0x75E8($s1)
    ctx->pc = 0x324ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    // 0x324ed4: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x324ED4u;
    SET_GPR_U32(ctx, 31, 0x324EDCu);
    ctx->pc = 0x324ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324ED4u;
    // 0x324ed8: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x324ED4u, 0x324EDCu)) {
        return;
    }
    ctx->pc = 0x324EDCu;
label_324edc:
    // 0x324edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324EDCu;
    {
        const bool branch_taken_0x324edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EDCu;
        // 0x324ee0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324edc) {
            ctx->pc = 0x324EFCu;
            goto label_324efc;
        }
    }
    ctx->pc = 0x324EE4u;
label_324ee4:
    // 0x324ee4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x324ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x324ee8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324EE8u;
    {
        const bool branch_taken_0x324ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ee8) {
            ctx->pc = 0x324EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324EE8u;
            // 0x324eec: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ec8;
        }
    }
    ctx->pc = 0x324EF0u;
label_324ef0:
    // 0x324ef0: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x324EF0u;
    SET_GPR_U32(ctx, 31, 0x324EF8u);
    ctx->pc = 0x324EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324EF0u;
    // 0x324ef4: 0x8e2475e8  lw          $a0, 0x75E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x324EF0u, 0x324EF8u)) {
        return;
    }
    ctx->pc = 0x324EF8u;
label_324ef8:
    // 0x324ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324efc:
    // 0x324efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x324efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324f00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x324f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324f08: 0x3e00008  jr          $ra
    ctx->pc = 0x324F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F08u;
        // 0x324f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324F10u;
}
