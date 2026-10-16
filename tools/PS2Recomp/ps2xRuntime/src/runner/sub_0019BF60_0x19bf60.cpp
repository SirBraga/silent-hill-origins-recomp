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

// Function: sub_0019BF60
// Address: 0x19bf60 - 0x19c030
void sub_0019BF60_0x19bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF60_0x19bf60");
#endif

    switch (ctx->pc) {
        case 0x19bf88u: goto label_19bf88;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfb0u: goto label_19bfb0;
        case 0x19bfd4u: goto label_19bfd4;
        case 0x19bfe0u: goto label_19bfe0;
        case 0x19bfecu: goto label_19bfec;
        case 0x19c008u: goto label_19c008;
        default: break;
    }

    ctx->pc = 0x19bf60u;

    // 0x19bf60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bf64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19bf68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19bf6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bf74: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19bf78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BF78u;
    {
        const bool branch_taken_0x19bf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF78u;
        // 0x19bf7c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf78) {
            ctx->pc = 0x19BF88u;
            goto label_19bf88;
        }
    }
    ctx->pc = 0x19BF80u;
    // 0x19bf80: 0xc0769b0  jal         func_1DA6C0
    ctx->pc = 0x19BF80u;
    SET_GPR_U32(ctx, 31, 0x19BF88u);
    ctx->pc = 0x1DA6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA6C0u, 0x19BF80u, 0x19BF88u)) {
        return;
    }
    ctx->pc = 0x19BF88u;
label_19bf88:
    // 0x19bf88: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19bf8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf90: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x19bf94: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x19BF94u;
    SET_GPR_U32(ctx, 31, 0x19BF9Cu);
    ctx->pc = 0x19BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF94u;
    // 0x19bf98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x19BF94u, 0x19BF9Cu)) {
        return;
    }
    ctx->pc = 0x19BF9Cu;
label_19bf9c:
    // 0x19bf9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bfa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bfa4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19BFA4u;
    {
        const bool branch_taken_0x19bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA4u;
        // 0x19bfa8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfa4) {
            ctx->pc = 0x19C018u;
            goto label_19c018;
        }
    }
    ctx->pc = 0x19BFACu;
    // 0x19bfac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19bfb0:
    // 0x19bfb0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x19bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bfb4: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x19BFB4u;
    {
        const bool branch_taken_0x19bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFB4u;
        // 0x19bfb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfb4) {
            ctx->pc = 0x19BFF0u;
            goto label_19bff0;
        }
    }
    ctx->pc = 0x19BFBCu;
    // 0x19bfbc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19bfc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19bfc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BFC4u;
    {
        const bool branch_taken_0x19bfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfc4) {
            ctx->pc = 0x19BFD8u;
            goto label_19bfd8;
        }
    }
    ctx->pc = 0x19BFCCu;
    // 0x19bfcc: 0xc07f960  jal         func_1FE580
    ctx->pc = 0x19BFCCu;
    SET_GPR_U32(ctx, 31, 0x19BFD4u);
    ctx->pc = 0x1FE580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE580u, 0x19BFCCu, 0x19BFD4u)) {
        return;
    }
    ctx->pc = 0x19BFD4u;
label_19bfd4:
    // 0x19bfd4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x19bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_19bfd8:
    // 0x19bfd8: 0xc08994a  jal         func_226528
    ctx->pc = 0x19BFD8u;
    SET_GPR_U32(ctx, 31, 0x19BFE0u);
    ctx->pc = 0x19BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFD8u;
    // 0x19bfdc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x19BFD8u, 0x19BFE0u)) {
        return;
    }
    ctx->pc = 0x19BFE0u;
label_19bfe0:
    // 0x19bfe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfe4: 0xc06702a  jal         func_19C0A8
    ctx->pc = 0x19BFE4u;
    SET_GPR_U32(ctx, 31, 0x19BFECu);
    ctx->pc = 0x19BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFE4u;
    // 0x19bfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C0A8u, 0x19BFE4u, 0x19BFECu)) {
        return;
    }
    ctx->pc = 0x19BFECu;
label_19bfec:
    // 0x19bfec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19bff0:
    // 0x19bff0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19bff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bff4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c000: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x19C000u;
    SET_GPR_U32(ctx, 31, 0x19C008u);
    ctx->pc = 0x19C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C000u;
    // 0x19c004: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x19C000u, 0x19C008u)) {
        return;
    }
    ctx->pc = 0x19C008u;
label_19c008:
    // 0x19c008: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c00c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c010: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19C010u;
    {
        const bool branch_taken_0x19c010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C010u;
        // 0x19c014: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c010) {
            ctx->pc = 0x19BFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19C018u;
label_19c018:
    // 0x19c018: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19c018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c01c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19c01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c024: 0x3e00008  jr          $ra
    ctx->pc = 0x19C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C024u;
        // 0x19c028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C02Cu;
    // 0x19c02c: 0x0  nop
    ctx->pc = 0x19c02cu;
    // NOP
    ctx->pc = 0x19c030u;
}
