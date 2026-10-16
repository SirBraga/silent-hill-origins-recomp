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

// Function: sub_0018BD88
// Address: 0x18bd88 - 0x18be10
void sub_0018BD88_0x18bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BD88_0x18bd88");
#endif

    switch (ctx->pc) {
        case 0x18bd88u: goto label_18bd88;
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bd90u: goto label_18bd90;
        case 0x18bd94u: goto label_18bd94;
        case 0x18bd98u: goto label_18bd98;
        case 0x18bd9cu: goto label_18bd9c;
        case 0x18bda0u: goto label_18bda0;
        case 0x18bda4u: goto label_18bda4;
        case 0x18bda8u: goto label_18bda8;
        case 0x18bdacu: goto label_18bdac;
        case 0x18bdb0u: goto label_18bdb0;
        case 0x18bdb4u: goto label_18bdb4;
        case 0x18bdb8u: goto label_18bdb8;
        case 0x18bdbcu: goto label_18bdbc;
        case 0x18bdc0u: goto label_18bdc0;
        case 0x18bdc4u: goto label_18bdc4;
        case 0x18bdc8u: goto label_18bdc8;
        case 0x18bdccu: goto label_18bdcc;
        case 0x18bdd0u: goto label_18bdd0;
        case 0x18bdd4u: goto label_18bdd4;
        case 0x18bdd8u: goto label_18bdd8;
        case 0x18bddcu: goto label_18bddc;
        case 0x18bde0u: goto label_18bde0;
        case 0x18bde4u: goto label_18bde4;
        case 0x18bde8u: goto label_18bde8;
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        default: break;
    }

    ctx->pc = 0x18bd88u;

label_18bd88:
    // 0x18bd88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18bd8c:
    // 0x18bd8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18bd90:
    // 0x18bd90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18bd94:
    // 0x18bd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18bd98:
    // 0x18bd98: 0xc06483c  jal         func_1920F0
label_18bd9c:
    if (ctx->pc == 0x18BD9Cu) {
        ctx->pc = 0x18BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD98u;
        // 0x18bd9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDA0u;
        goto label_18bda0;
    }
    ctx->pc = 0x18BD98u;
    SET_GPR_U32(ctx, 31, 0x18BDA0u);
    ctx->pc = 0x18BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD98u;
    // 0x18bd9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1920F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1920F0u, 0x18BD98u, 0x18BDA0u)) {
        return;
    }
    ctx->pc = 0x18BDA0u;
label_18bda0:
    // 0x18bda0: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_18bda4:
    // 0x18bda4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_18bda8:
    // 0x18bda8: 0xc07d234  jal         func_1F48D0
label_18bdac:
    if (ctx->pc == 0x18BDACu) {
        ctx->pc = 0x18BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDA8u;
        // 0x18bdac: 0x24508f50  addiu       $s0, $v0, -0x70B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDB0u;
        goto label_18bdb0;
    }
    ctx->pc = 0x18BDA8u;
    SET_GPR_U32(ctx, 31, 0x18BDB0u);
    ctx->pc = 0x18BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDA8u;
    // 0x18bdac: 0x24508f50  addiu       $s0, $v0, -0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18BDA8u, 0x18BDB0u)) {
        return;
    }
    ctx->pc = 0x18BDB0u;
label_18bdb0:
    // 0x18bdb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18bdb4:
    if (ctx->pc == 0x18BDB4u) {
        ctx->pc = 0x18BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB0u;
        // 0x18bdb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDB8u;
        goto label_18bdb8;
    }
    ctx->pc = 0x18BDB0u;
    {
        const bool branch_taken_0x18bdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB0u;
        // 0x18bdb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdb0) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BDB8u;
label_18bdb8:
    // 0x18bdb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bdbc:
    // 0x18bdbc: 0xc07d3d6  jal         func_1F4F58
label_18bdc0:
    if (ctx->pc == 0x18BDC0u) {
        ctx->pc = 0x18BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDBCu;
        // 0x18bdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDC4u;
        goto label_18bdc4;
    }
    ctx->pc = 0x18BDBCu;
    SET_GPR_U32(ctx, 31, 0x18BDC4u);
    ctx->pc = 0x18BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDBCu;
    // 0x18bdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18BDBCu, 0x18BDC4u)) {
        return;
    }
    ctx->pc = 0x18BDC4u;
label_18bdc4:
    // 0x18bdc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18bdc8:
    if (ctx->pc == 0x18BDC8u) {
        ctx->pc = 0x18BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDC4u;
        // 0x18bdc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDCCu;
        goto label_18bdcc;
    }
    ctx->pc = 0x18BDC4u;
    {
        const bool branch_taken_0x18bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDC4u;
        // 0x18bdc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdc4) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BDCCu;
label_18bdcc:
    // 0x18bdcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bdd0:
    // 0x18bdd0: 0xc07d3a6  jal         func_1F4E98
label_18bdd4:
    if (ctx->pc == 0x18BDD4u) {
        ctx->pc = 0x18BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDD0u;
        // 0x18bdd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDD8u;
        goto label_18bdd8;
    }
    ctx->pc = 0x18BDD0u;
    SET_GPR_U32(ctx, 31, 0x18BDD8u);
    ctx->pc = 0x18BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDD0u;
    // 0x18bdd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E98u, 0x18BDD0u, 0x18BDD8u)) {
        return;
    }
    ctx->pc = 0x18BDD8u;
label_18bdd8:
    // 0x18bdd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18bdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bddc:
    // 0x18bddc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_18bde0:
    if (ctx->pc == 0x18BDE0u) {
        ctx->pc = 0x18BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDDCu;
        // 0x18bde0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDE4u;
        goto label_18bde4;
    }
    ctx->pc = 0x18BDDCu;
    {
        const bool branch_taken_0x18bddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDDCu;
        // 0x18bde0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bddc) {
            ctx->pc = 0x18BDF8u;
            goto label_18bdf8;
        }
    }
    ctx->pc = 0x18BDE4u;
label_18bde4:
    // 0x18bde4: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x18bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_18bde8:
    // 0x18bde8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_18bdec:
    // 0x18bdec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18bdf0:
    // 0x18bdf0: 0x60f809  jalr        $v1
label_18bdf4:
    if (ctx->pc == 0x18BDF4u) {
        ctx->pc = 0x18BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDF0u;
        // 0x18bdf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BDF8u;
        goto label_18bdf8;
    }
    ctx->pc = 0x18BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18BDF8u);
        ctx->pc = 0x18BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDF0u;
        // 0x18bdf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BDF0u, 0x18BDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BDF8u;
label_18bdf8:
    // 0x18bdf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18bdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18bdfc:
    // 0x18bdfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18be00:
    // 0x18be00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18be04:
    // 0x18be04: 0x3e00008  jr          $ra
label_18be08:
    if (ctx->pc == 0x18BE08u) {
        ctx->pc = 0x18BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE04u;
        // 0x18be08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BE0Cu;
        goto label_18be0c;
    }
    ctx->pc = 0x18BE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE04u;
        // 0x18be08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BE0Cu;
label_18be0c:
    // 0x18be0c: 0x0  nop
    ctx->pc = 0x18be0cu;
    // NOP
    ctx->pc = 0x18be10u;
}
