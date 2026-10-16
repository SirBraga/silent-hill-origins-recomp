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

// Function: sub_0025ECA0
// Address: 0x25eca0 - 0x25edd0
void sub_0025ECA0_0x25eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ECA0_0x25eca0");
#endif

    switch (ctx->pc) {
        case 0x25eca0u: goto label_25eca0;
        case 0x25eca4u: goto label_25eca4;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecb0u: goto label_25ecb0;
        case 0x25ecb4u: goto label_25ecb4;
        case 0x25ecb8u: goto label_25ecb8;
        case 0x25ecbcu: goto label_25ecbc;
        case 0x25ecc0u: goto label_25ecc0;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ecc8u: goto label_25ecc8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ecd4u: goto label_25ecd4;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ece4u: goto label_25ece4;
        case 0x25ece8u: goto label_25ece8;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecf0u: goto label_25ecf0;
        case 0x25ecf4u: goto label_25ecf4;
        case 0x25ecf8u: goto label_25ecf8;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed00u: goto label_25ed00;
        case 0x25ed04u: goto label_25ed04;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed0cu: goto label_25ed0c;
        case 0x25ed10u: goto label_25ed10;
        case 0x25ed14u: goto label_25ed14;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed1cu: goto label_25ed1c;
        case 0x25ed20u: goto label_25ed20;
        case 0x25ed24u: goto label_25ed24;
        case 0x25ed28u: goto label_25ed28;
        case 0x25ed2cu: goto label_25ed2c;
        case 0x25ed30u: goto label_25ed30;
        case 0x25ed34u: goto label_25ed34;
        case 0x25ed38u: goto label_25ed38;
        case 0x25ed3cu: goto label_25ed3c;
        case 0x25ed40u: goto label_25ed40;
        case 0x25ed44u: goto label_25ed44;
        case 0x25ed48u: goto label_25ed48;
        case 0x25ed4cu: goto label_25ed4c;
        case 0x25ed50u: goto label_25ed50;
        case 0x25ed54u: goto label_25ed54;
        case 0x25ed58u: goto label_25ed58;
        case 0x25ed5cu: goto label_25ed5c;
        case 0x25ed60u: goto label_25ed60;
        case 0x25ed64u: goto label_25ed64;
        case 0x25ed68u: goto label_25ed68;
        case 0x25ed6cu: goto label_25ed6c;
        case 0x25ed70u: goto label_25ed70;
        case 0x25ed74u: goto label_25ed74;
        case 0x25ed78u: goto label_25ed78;
        case 0x25ed7cu: goto label_25ed7c;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed84u: goto label_25ed84;
        case 0x25ed88u: goto label_25ed88;
        case 0x25ed8cu: goto label_25ed8c;
        case 0x25ed90u: goto label_25ed90;
        case 0x25ed94u: goto label_25ed94;
        case 0x25ed98u: goto label_25ed98;
        case 0x25ed9cu: goto label_25ed9c;
        case 0x25eda0u: goto label_25eda0;
        case 0x25eda4u: goto label_25eda4;
        case 0x25eda8u: goto label_25eda8;
        case 0x25edacu: goto label_25edac;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edb4u: goto label_25edb4;
        case 0x25edb8u: goto label_25edb8;
        case 0x25edbcu: goto label_25edbc;
        case 0x25edc0u: goto label_25edc0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edc8u: goto label_25edc8;
        case 0x25edccu: goto label_25edcc;
        default: break;
    }

    ctx->pc = 0x25eca0u;

label_25eca0:
    // 0x25eca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25eca4:
    // 0x25eca4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_25eca8:
    // 0x25eca8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25ecac:
    // 0x25ecac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x25ecacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_25ecb0:
    // 0x25ecb0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25ecb4:
    // 0x25ecb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25ecb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25ecb8:
    // 0x25ecb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25ecbc:
    // 0x25ecbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25ecbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ecc0:
    // 0x25ecc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25ecc4:
    // 0x25ecc4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25ecc8:
    // 0x25ecc8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25eccc:
    // 0x25eccc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25ecd0:
    // 0x25ecd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ecd4:
    // 0x25ecd4: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_25ecd8:
    if (ctx->pc == 0x25ECD8u) {
        ctx->pc = 0x25ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECD4u;
        // 0x25ecd8: 0xaf858618  sw          $a1, -0x79E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECDCu;
        goto label_25ecdc;
    }
    ctx->pc = 0x25ECD4u;
    {
        const bool branch_taken_0x25ecd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECD4u;
        // 0x25ecd8: 0xaf858618  sw          $a1, -0x79E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecd4) {
            ctx->pc = 0x25EDA0u;
            goto label_25eda0;
        }
    }
    ctx->pc = 0x25ECDCu;
label_25ecdc:
    // 0x25ecdc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x25ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_25ece0:
    // 0x25ece0: 0x245643b0  addiu       $s6, $v0, 0x43B0
    ctx->pc = 0x25ece0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
label_25ece4:
    // 0x25ece4: 0x4a842  srl         $s5, $a0, 1
    ctx->pc = 0x25ece4u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_25ece8:
    // 0x25ece8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x25ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25ecec:
    // 0x25ecec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_25ecf0:
    if (ctx->pc == 0x25ECF0u) {
        ctx->pc = 0x25ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECECu;
        // 0x25ecf0: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ECF4u;
        goto label_25ecf4;
    }
    ctx->pc = 0x25ECECu;
    {
        const bool branch_taken_0x25ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECECu;
        // 0x25ecf0: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecec) {
            ctx->pc = 0x25ED90u;
            goto label_25ed90;
        }
    }
    ctx->pc = 0x25ECF4u;
label_25ecf4:
    // 0x25ecf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25ecf8:
    // 0x25ecf8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x25ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25ecfc:
    // 0x25ecfc: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_25ed00:
    if (ctx->pc == 0x25ED00u) {
        ctx->pc = 0x25ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECFCu;
        // 0x25ed00: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED04u;
        goto label_25ed04;
    }
    ctx->pc = 0x25ECFCu;
    {
        const bool branch_taken_0x25ecfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECFCu;
        // 0x25ed00: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecfc) {
            ctx->pc = 0x25ED68u;
            goto label_25ed68;
        }
    }
    ctx->pc = 0x25ED04u;
label_25ed04:
    // 0x25ed04: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_25ed08:
    if (ctx->pc == 0x25ED08u) {
        ctx->pc = 0x25ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED04u;
        // 0x25ed08: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED0Cu;
        goto label_25ed0c;
    }
    ctx->pc = 0x25ED04u;
    {
        const bool branch_taken_0x25ed04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED04u;
        // 0x25ed08: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed04) {
            ctx->pc = 0x25ED90u;
            goto label_25ed90;
        }
    }
    ctx->pc = 0x25ED0Cu;
label_25ed0c:
    // 0x25ed0c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x25ed0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25ed10:
    // 0x25ed10: 0x240f809  jalr        $s2
label_25ed14:
    if (ctx->pc == 0x25ED14u) {
        ctx->pc = 0x25ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED10u;
        // 0x25ed14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED18u;
        goto label_25ed18;
    }
    ctx->pc = 0x25ED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x25ED18u);
        ctx->pc = 0x25ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED10u;
        // 0x25ed14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED10u, 0x25ED18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ED18u;
label_25ed18:
    // 0x25ed18: 0x50530007  beql        $v0, $s3, . + 4 + (0x7 << 2)
label_25ed1c:
    if (ctx->pc == 0x25ED1Cu) {
        ctx->pc = 0x25ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED18u;
        // 0x25ed1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED20u;
        goto label_25ed20;
    }
    ctx->pc = 0x25ED18u;
    {
        const bool branch_taken_0x25ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x25ed18) {
            ctx->pc = 0x25ED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED18u;
            // 0x25ed1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED38u;
            goto label_25ed38;
        }
    }
    ctx->pc = 0x25ED20u;
label_25ed20:
    // 0x25ed20: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_25ed24:
    if (ctx->pc == 0x25ED24u) {
        ctx->pc = 0x25ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED20u;
        // 0x25ed24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED28u;
        goto label_25ed28;
    }
    ctx->pc = 0x25ED20u;
    {
        const bool branch_taken_0x25ed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed20) {
            ctx->pc = 0x25ED24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED20u;
            // 0x25ed24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED58u;
            goto label_25ed58;
        }
    }
    ctx->pc = 0x25ED28u;
label_25ed28:
    // 0x25ed28: 0x10510008  beq         $v0, $s1, . + 4 + (0x8 << 2)
label_25ed2c:
    if (ctx->pc == 0x25ED2Cu) {
        ctx->pc = 0x25ED30u;
        goto label_25ed30;
    }
    ctx->pc = 0x25ED28u;
    {
        const bool branch_taken_0x25ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x25ed28) {
            ctx->pc = 0x25ED4Cu;
            goto label_25ed4c;
        }
    }
    ctx->pc = 0x25ED30u;
label_25ed30:
    // 0x25ed30: 0x10000009  b           . + 4 + (0x9 << 2)
label_25ed34:
    if (ctx->pc == 0x25ED34u) {
        ctx->pc = 0x25ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED30u;
        // 0x25ed34: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED38u;
        goto label_25ed38;
    }
    ctx->pc = 0x25ED30u;
    {
        const bool branch_taken_0x25ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED30u;
        // 0x25ed34: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed30) {
            ctx->pc = 0x25ED58u;
            goto label_25ed58;
        }
    }
    ctx->pc = 0x25ED38u;
label_25ed38:
    // 0x25ed38: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x25ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25ed3c:
    // 0x25ed3c: 0x40f809  jalr        $v0
label_25ed40:
    if (ctx->pc == 0x25ED40u) {
        ctx->pc = 0x25ED44u;
        goto label_25ed44;
    }
    ctx->pc = 0x25ED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25ED44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED3Cu, 0x25ED44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ED44u;
label_25ed44:
    // 0x25ed44: 0x10000004  b           . + 4 + (0x4 << 2)
label_25ed48:
    if (ctx->pc == 0x25ED48u) {
        ctx->pc = 0x25ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED44u;
        // 0x25ed48: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED4Cu;
        goto label_25ed4c;
    }
    ctx->pc = 0x25ED44u;
    {
        const bool branch_taken_0x25ed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED44u;
        // 0x25ed48: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed44) {
            ctx->pc = 0x25ED58u;
            goto label_25ed58;
        }
    }
    ctx->pc = 0x25ED4Cu;
label_25ed4c:
    // 0x25ed4c: 0xc09512e  jal         func_2544B8
label_25ed50:
    if (ctx->pc == 0x25ED50u) {
        ctx->pc = 0x25ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED4Cu;
        // 0x25ed50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED54u;
        goto label_25ed54;
    }
    ctx->pc = 0x25ED4Cu;
    SET_GPR_U32(ctx, 31, 0x25ED54u);
    ctx->pc = 0x25ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED4Cu;
    // 0x25ed50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2544B8u, 0x25ED4Cu, 0x25ED54u)) {
        return;
    }
    ctx->pc = 0x25ED54u;
label_25ed54:
    // 0x25ed54: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x25ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ed58:
    // 0x25ed58: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
label_25ed5c:
    if (ctx->pc == 0x25ED5Cu) {
        ctx->pc = 0x25ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED58u;
        // 0x25ed5c: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED60u;
        goto label_25ed60;
    }
    ctx->pc = 0x25ED58u;
    {
        const bool branch_taken_0x25ed58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED58u;
        // 0x25ed5c: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed58) {
            ctx->pc = 0x25ED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ed10;
        }
    }
    ctx->pc = 0x25ED60u;
label_25ed60:
    // 0x25ed60: 0x1000000d  b           . + 4 + (0xD << 2)
label_25ed64:
    if (ctx->pc == 0x25ED64u) {
        ctx->pc = 0x25ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED60u;
        // 0x25ed64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED68u;
        goto label_25ed68;
    }
    ctx->pc = 0x25ED60u;
    {
        const bool branch_taken_0x25ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED60u;
        // 0x25ed64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed60) {
            ctx->pc = 0x25ED98u;
            goto label_25ed98;
        }
    }
    ctx->pc = 0x25ED68u;
label_25ed68:
    // 0x25ed68: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_25ed6c:
    if (ctx->pc == 0x25ED6Cu) {
        ctx->pc = 0x25ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED68u;
        // 0x25ed6c: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED70u;
        goto label_25ed70;
    }
    ctx->pc = 0x25ED68u;
    {
        const bool branch_taken_0x25ed68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED68u;
        // 0x25ed6c: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed68) {
            ctx->pc = 0x25ED94u;
            goto label_25ed94;
        }
    }
    ctx->pc = 0x25ED70u;
label_25ed70:
    // 0x25ed70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ed74:
    // 0x25ed74: 0x0  nop
    ctx->pc = 0x25ed74u;
    // NOP
label_25ed78:
    // 0x25ed78: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x25ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25ed7c:
    // 0x25ed7c: 0x40f809  jalr        $v0
label_25ed80:
    if (ctx->pc == 0x25ED80u) {
        ctx->pc = 0x25ED84u;
        goto label_25ed84;
    }
    ctx->pc = 0x25ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25ED84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED7Cu, 0x25ED84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ED84u;
label_25ed84:
    // 0x25ed84: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x25ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ed88:
    // 0x25ed88: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
label_25ed8c:
    if (ctx->pc == 0x25ED8Cu) {
        ctx->pc = 0x25ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED88u;
        // 0x25ed8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED90u;
        goto label_25ed90;
    }
    ctx->pc = 0x25ED88u;
    {
        const bool branch_taken_0x25ed88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed88) {
            ctx->pc = 0x25ED8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ED88u;
            // 0x25ed8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ED78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ed78;
        }
    }
    ctx->pc = 0x25ED90u;
label_25ed90:
    // 0x25ed90: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x25ed90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ed94:
    // 0x25ed94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ed98:
    // 0x25ed98: 0x1480ffd3  bnez        $a0, . + 4 + (-0x2D << 2)
label_25ed9c:
    if (ctx->pc == 0x25ED9Cu) {
        ctx->pc = 0x25ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED98u;
        // 0x25ed9c: 0x4a842  srl         $s5, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EDA0u;
        goto label_25eda0;
    }
    ctx->pc = 0x25ED98u;
    {
        const bool branch_taken_0x25ed98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED98u;
        // 0x25ed9c: 0x4a842  srl         $s5, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed98) {
            ctx->pc = 0x25ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ece8;
        }
    }
    ctx->pc = 0x25EDA0u;
label_25eda0:
    // 0x25eda0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25eda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25eda4:
    // 0x25eda4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25eda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25eda8:
    // 0x25eda8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25eda8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25edac:
    // 0x25edac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25edacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25edb0:
    // 0x25edb0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25edb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25edb4:
    // 0x25edb4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25edb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25edb8:
    // 0x25edb8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25edb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25edbc:
    // 0x25edbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25edc0:
    // 0x25edc0: 0xaf808618  sw          $zero, -0x79E8($gp)
    ctx->pc = 0x25edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 0));
label_25edc4:
    // 0x25edc4: 0x3e00008  jr          $ra
label_25edc8:
    if (ctx->pc == 0x25EDC8u) {
        ctx->pc = 0x25EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDC4u;
        // 0x25edc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EDCCu;
        goto label_25edcc;
    }
    ctx->pc = 0x25EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDC4u;
        // 0x25edc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EDCCu;
label_25edcc:
    // 0x25edcc: 0x0  nop
    ctx->pc = 0x25edccu;
    // NOP
    ctx->pc = 0x25edd0u;
}
