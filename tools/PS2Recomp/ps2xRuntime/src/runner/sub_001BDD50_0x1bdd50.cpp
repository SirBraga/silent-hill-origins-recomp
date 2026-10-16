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

// Function: sub_001BDD50
// Address: 0x1bdd50 - 0x1bde00
void sub_001BDD50_0x1bdd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDD50_0x1bdd50");
#endif

    switch (ctx->pc) {
        case 0x1bdd6cu: goto label_1bdd6c;
        case 0x1bdd80u: goto label_1bdd80;
        case 0x1bdd88u: goto label_1bdd88;
        case 0x1bdd94u: goto label_1bdd94;
        case 0x1bdd9cu: goto label_1bdd9c;
        case 0x1bdde0u: goto label_1bdde0;
        default: break;
    }

    ctx->pc = 0x1bdd50u;

    // 0x1bdd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdd54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdd60: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bdd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1bdd64: 0xc06bd58  jal         func_1AF560
    ctx->pc = 0x1BDD64u;
    SET_GPR_U32(ctx, 31, 0x1BDD6Cu);
    ctx->pc = 0x1BDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD64u;
    // 0x1bdd68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF560u, 0x1BDD64u, 0x1BDD6Cu)) {
        return;
    }
    ctx->pc = 0x1BDD6Cu;
label_1bdd6c:
    // 0x1bdd6c: 0x8e050398  lw          $a1, 0x398($s0)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    // 0x1bdd70: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDD70u;
    {
        const bool branch_taken_0x1bdd70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD70u;
        // 0x1bdd74: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd70) {
            ctx->pc = 0x1BDD8Cu;
            goto label_1bdd8c;
        }
    }
    ctx->pc = 0x1BDD78u;
    // 0x1bdd78: 0xc0640ce  jal         func_190338
    ctx->pc = 0x1BDD78u;
    SET_GPR_U32(ctx, 31, 0x1BDD80u);
    ctx->pc = 0x1BDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD78u;
    // 0x1bdd7c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x1BDD78u, 0x1BDD80u)) {
        return;
    }
    ctx->pc = 0x1BDD80u;
label_1bdd80:
    // 0x1bdd80: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BDD80u;
    SET_GPR_U32(ctx, 31, 0x1BDD88u);
    ctx->pc = 0x1BDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD80u;
    // 0x1bdd84: 0x8e040398  lw          $a0, 0x398($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BDD80u, 0x1BDD88u)) {
        return;
    }
    ctx->pc = 0x1BDD88u;
label_1bdd88:
    // 0x1bdd88: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x1bdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
label_1bdd8c:
    // 0x1bdd8c: 0xc06f5d6  jal         func_1BD758
    ctx->pc = 0x1BDD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BDD94u);
    ctx->pc = 0x1BDD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD8Cu;
    // 0x1bdd90: 0x8e040364  lw          $a0, 0x364($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD758u, 0x1BDD8Cu, 0x1BDD94u)) {
        return;
    }
    ctx->pc = 0x1BDD94u;
label_1bdd94:
    // 0x1bdd94: 0xc06f8b4  jal         func_1BE2D0
    ctx->pc = 0x1BDD94u;
    SET_GPR_U32(ctx, 31, 0x1BDD9Cu);
    ctx->pc = 0x1BDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD94u;
    // 0x1bdd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BDD94u, 0x1BDD9Cu)) {
        return;
    }
    ctx->pc = 0x1BDD9Cu;
label_1bdd9c:
    // 0x1bdd9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bdd9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdda0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDDA0u;
    {
        const bool branch_taken_0x1bdda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDA0u;
        // 0x1bdda4: 0x8e0202ac  lw          $v0, 0x2AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdda0) {
            ctx->pc = 0x1BDDBCu;
            goto label_1bddbc;
        }
    }
    ctx->pc = 0x1BDDA8u;
    // 0x1bdda8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bdda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bddac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bddb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bddb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDDB4u;
    {
        const bool branch_taken_0x1bddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDB4u;
        // 0x1bddb8: 0xac430308  sw          $v1, 0x308($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddb4) {
            ctx->pc = 0x1BDDC8u;
            goto label_1bddc8;
        }
    }
    ctx->pc = 0x1BDDBCu;
label_1bddbc:
    // 0x1bddbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bddc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bddc4: 0xac400308  sw          $zero, 0x308($v0)
    ctx->pc = 0x1bddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 776), GPR_U32(ctx, 0));
label_1bddc8:
    // 0x1bddc8: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bddcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bddd0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDDD0u;
    {
        const bool branch_taken_0x1bddd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bddd0) {
            ctx->pc = 0x1BDDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDD0u;
            // 0x1bddd4: 0x8e040360  lw          $a0, 0x360($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDDE4u;
            goto label_1bdde4;
        }
    }
    ctx->pc = 0x1BDDD8u;
    // 0x1bddd8: 0xc06f874  jal         func_1BE1D0
    ctx->pc = 0x1BDDD8u;
    SET_GPR_U32(ctx, 31, 0x1BDDE0u);
    ctx->pc = 0x1BDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDD8u;
    // 0x1bdddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE1D0u, 0x1BDDD8u, 0x1BDDE0u)) {
        return;
    }
    ctx->pc = 0x1BDDE0u;
label_1bdde0:
    // 0x1bdde0: 0x8e040360  lw          $a0, 0x360($s0)
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_1bdde4:
    // 0x1bdde4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdde8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BDDE8u;
    {
        const bool branch_taken_0x1bdde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdde8) {
            ctx->pc = 0x1BDDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDE8u;
            // 0x1bddec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDDF0u;
            goto label_1bddf0;
        }
    }
    ctx->pc = 0x1BDDF0u;
label_1bddf0:
    // 0x1bddf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bddf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bddf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDF8u;
        // 0x1bddfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE00u;
}
