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

// Function: sub_001FDE98
// Address: 0x1fde98 - 0x1fdfc0
void sub_001FDE98_0x1fde98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDE98_0x1fde98");
#endif

    switch (ctx->pc) {
        case 0x1fde98u: goto label_1fde98;
        case 0x1fde9cu: goto label_1fde9c;
        case 0x1fdea0u: goto label_1fdea0;
        case 0x1fdea4u: goto label_1fdea4;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdeacu: goto label_1fdeac;
        case 0x1fdeb0u: goto label_1fdeb0;
        case 0x1fdeb4u: goto label_1fdeb4;
        case 0x1fdeb8u: goto label_1fdeb8;
        case 0x1fdebcu: goto label_1fdebc;
        case 0x1fdec0u: goto label_1fdec0;
        case 0x1fdec4u: goto label_1fdec4;
        case 0x1fdec8u: goto label_1fdec8;
        case 0x1fdeccu: goto label_1fdecc;
        case 0x1fded0u: goto label_1fded0;
        case 0x1fded4u: goto label_1fded4;
        case 0x1fded8u: goto label_1fded8;
        case 0x1fdedcu: goto label_1fdedc;
        case 0x1fdee0u: goto label_1fdee0;
        case 0x1fdee4u: goto label_1fdee4;
        case 0x1fdee8u: goto label_1fdee8;
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdef0u: goto label_1fdef0;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdef8u: goto label_1fdef8;
        case 0x1fdefcu: goto label_1fdefc;
        case 0x1fdf00u: goto label_1fdf00;
        case 0x1fdf04u: goto label_1fdf04;
        case 0x1fdf08u: goto label_1fdf08;
        case 0x1fdf0cu: goto label_1fdf0c;
        case 0x1fdf10u: goto label_1fdf10;
        case 0x1fdf14u: goto label_1fdf14;
        case 0x1fdf18u: goto label_1fdf18;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdf20u: goto label_1fdf20;
        case 0x1fdf24u: goto label_1fdf24;
        case 0x1fdf28u: goto label_1fdf28;
        case 0x1fdf2cu: goto label_1fdf2c;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf34u: goto label_1fdf34;
        case 0x1fdf38u: goto label_1fdf38;
        case 0x1fdf3cu: goto label_1fdf3c;
        case 0x1fdf40u: goto label_1fdf40;
        case 0x1fdf44u: goto label_1fdf44;
        case 0x1fdf48u: goto label_1fdf48;
        case 0x1fdf4cu: goto label_1fdf4c;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf54u: goto label_1fdf54;
        case 0x1fdf58u: goto label_1fdf58;
        case 0x1fdf5cu: goto label_1fdf5c;
        case 0x1fdf60u: goto label_1fdf60;
        case 0x1fdf64u: goto label_1fdf64;
        case 0x1fdf68u: goto label_1fdf68;
        case 0x1fdf6cu: goto label_1fdf6c;
        case 0x1fdf70u: goto label_1fdf70;
        case 0x1fdf74u: goto label_1fdf74;
        case 0x1fdf78u: goto label_1fdf78;
        case 0x1fdf7cu: goto label_1fdf7c;
        case 0x1fdf80u: goto label_1fdf80;
        case 0x1fdf84u: goto label_1fdf84;
        case 0x1fdf88u: goto label_1fdf88;
        case 0x1fdf8cu: goto label_1fdf8c;
        case 0x1fdf90u: goto label_1fdf90;
        case 0x1fdf94u: goto label_1fdf94;
        case 0x1fdf98u: goto label_1fdf98;
        case 0x1fdf9cu: goto label_1fdf9c;
        case 0x1fdfa0u: goto label_1fdfa0;
        case 0x1fdfa4u: goto label_1fdfa4;
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fdfacu: goto label_1fdfac;
        case 0x1fdfb0u: goto label_1fdfb0;
        case 0x1fdfb4u: goto label_1fdfb4;
        case 0x1fdfb8u: goto label_1fdfb8;
        case 0x1fdfbcu: goto label_1fdfbc;
        default: break;
    }

    ctx->pc = 0x1fde98u;

label_1fde98:
    // 0x1fde98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fde98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fde9c:
    // 0x1fde9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fde9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1fdea0:
    // 0x1fdea0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fdea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fdea4:
    // 0x1fdea4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fdea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdea8:
    // 0x1fdea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fdeac:
    // 0x1fdeac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fdeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdeb0:
    // 0x1fdeb0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fdeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1fdeb4:
    // 0x1fdeb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fdeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fdeb8:
    // 0x1fdeb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fdebc:
    // 0x1fdebc: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1fdec0:
    if (ctx->pc == 0x1FDEC0u) {
        ctx->pc = 0x1FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEBCu;
        // 0x1fdec0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEC4u;
        goto label_1fdec4;
    }
    ctx->pc = 0x1FDEBCu;
    {
        const bool branch_taken_0x1fdebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEBCu;
        // 0x1fdec0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdebc) {
            ctx->pc = 0x1FDF94u;
            goto label_1fdf94;
        }
    }
    ctx->pc = 0x1FDEC4u;
label_1fdec4:
    // 0x1fdec4: 0xc081816  jal         func_206058
label_1fdec8:
    if (ctx->pc == 0x1FDEC8u) {
        ctx->pc = 0x1FDECCu;
        goto label_1fdecc;
    }
    ctx->pc = 0x1FDEC4u;
    SET_GPR_U32(ctx, 31, 0x1FDECCu);
    ctx->pc = 0x206058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206058u, 0x1FDEC4u, 0x1FDECCu)) {
        return;
    }
    ctx->pc = 0x1FDECCu;
label_1fdecc:
    // 0x1fdecc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1fded0:
    if (ctx->pc == 0x1FDED0u) {
        ctx->pc = 0x1FDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDECCu;
        // 0x1fded0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDED4u;
        goto label_1fded4;
    }
    ctx->pc = 0x1FDECCu;
    {
        const bool branch_taken_0x1fdecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDECCu;
        // 0x1fded0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdecc) {
            ctx->pc = 0x1FDF3Cu;
            goto label_1fdf3c;
        }
    }
    ctx->pc = 0x1FDED4u;
label_1fded4:
    // 0x1fded4: 0xc0808f0  jal         func_2023C0
label_1fded8:
    if (ctx->pc == 0x1FDED8u) {
        ctx->pc = 0x1FDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED4u;
        // 0x1fded8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEDCu;
        goto label_1fdedc;
    }
    ctx->pc = 0x1FDED4u;
    SET_GPR_U32(ctx, 31, 0x1FDEDCu);
    ctx->pc = 0x1FDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDED4u;
    // 0x1fded8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FDED4u, 0x1FDEDCu)) {
        return;
    }
    ctx->pc = 0x1FDEDCu;
label_1fdedc:
    // 0x1fdedc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fdee0:
    // 0x1fdee0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1fdee4:
    // 0x1fdee4: 0x246332d0  addiu       $v1, $v1, 0x32D0
    ctx->pc = 0x1fdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13008));
label_1fdee8:
    // 0x1fdee8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fdeec:
    // 0x1fdeec: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1fdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_1fdef0:
    // 0x1fdef0: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
label_1fdef4:
    // 0x1fdef4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fdef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1fdef8:
    // 0x1fdef8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1fdefc:
    // 0x1fdefc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1fdf00:
    // 0x1fdf00: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fdf04:
    // 0x1fdf04: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1fdf04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1fdf08:
    // 0x1fdf08: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1fdf0c:
    // 0x1fdf0c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1fdf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1fdf10:
    // 0x1fdf10: 0x24a534e0  addiu       $a1, $a1, 0x34E0
    ctx->pc = 0x1fdf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13536));
label_1fdf14:
    // 0x1fdf14: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1fdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1fdf18:
    // 0x1fdf18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fdf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf1c:
    // 0x1fdf1c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1fdf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1fdf20:
    // 0x1fdf20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fdf20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fdf24:
    // 0x1fdf24: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1fdf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1fdf28:
    // 0x1fdf28: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1fdf28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1fdf2c:
    // 0x1fdf2c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1fdf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1fdf30:
    // 0x1fdf30: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1fdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1fdf34:
    // 0x1fdf34: 0x10000016  b           . + 4 + (0x16 << 2)
label_1fdf38:
    if (ctx->pc == 0x1FDF38u) {
        ctx->pc = 0x1FDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF34u;
        // 0x1fdf38: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF3Cu;
        goto label_1fdf3c;
    }
    ctx->pc = 0x1FDF34u;
    {
        const bool branch_taken_0x1fdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF34u;
        // 0x1fdf38: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf34) {
            ctx->pc = 0x1FDF90u;
            goto label_1fdf90;
        }
    }
    ctx->pc = 0x1FDF3Cu;
label_1fdf3c:
    // 0x1fdf3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fdf40:
    // 0x1fdf40: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1fdf44:
    if (ctx->pc == 0x1FDF44u) {
        ctx->pc = 0x1FDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF40u;
        // 0x1fdf44: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF48u;
        goto label_1fdf48;
    }
    ctx->pc = 0x1FDF40u;
    {
        const bool branch_taken_0x1fdf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf40) {
            ctx->pc = 0x1FDF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF40u;
            // 0x1fdf44: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF94u;
            goto label_1fdf94;
        }
    }
    ctx->pc = 0x1FDF48u;
label_1fdf48:
    // 0x1fdf48: 0x40f809  jalr        $v0
label_1fdf4c:
    if (ctx->pc == 0x1FDF4Cu) {
        ctx->pc = 0x1FDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF48u;
        // 0x1fdf4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF50u;
        goto label_1fdf50;
    }
    ctx->pc = 0x1FDF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FDF50u);
        ctx->pc = 0x1FDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF48u;
        // 0x1fdf4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF48u, 0x1FDF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDF50u;
label_1fdf50:
    // 0x1fdf50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fdf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf54:
    // 0x1fdf54: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_1fdf58:
    if (ctx->pc == 0x1FDF58u) {
        ctx->pc = 0x1FDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF54u;
        // 0x1fdf58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF5Cu;
        goto label_1fdf5c;
    }
    ctx->pc = 0x1FDF54u;
    {
        const bool branch_taken_0x1fdf54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF54u;
        // 0x1fdf58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf54) {
            ctx->pc = 0x1FDF90u;
            goto label_1fdf90;
        }
    }
    ctx->pc = 0x1FDF5Cu;
label_1fdf5c:
    // 0x1fdf5c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fdf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fdf60:
    // 0x1fdf60: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fdf60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fdf64:
    // 0x1fdf64: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fdf68:
    // 0x1fdf68: 0x60f809  jalr        $v1
label_1fdf6c:
    if (ctx->pc == 0x1FDF6Cu) {
        ctx->pc = 0x1FDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF68u;
        // 0x1fdf6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF70u;
        goto label_1fdf70;
    }
    ctx->pc = 0x1FDF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDF70u);
        ctx->pc = 0x1FDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF68u;
        // 0x1fdf6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF68u, 0x1FDF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDF70u;
label_1fdf70:
    // 0x1fdf70: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fdf74:
    // 0x1fdf74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fdf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf78:
    // 0x1fdf78: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1fdf78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1fdf7c:
    // 0x1fdf7c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fdf80:
    // 0x1fdf80: 0x60f809  jalr        $v1
label_1fdf84:
    if (ctx->pc == 0x1FDF84u) {
        ctx->pc = 0x1FDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF80u;
        // 0x1fdf84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF88u;
        goto label_1fdf88;
    }
    ctx->pc = 0x1FDF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FDF88u);
        ctx->pc = 0x1FDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF80u;
        // 0x1fdf84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF80u, 0x1FDF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDF88u;
label_1fdf88:
    // 0x1fdf88: 0xc07f850  jal         func_1FE140
label_1fdf8c:
    if (ctx->pc == 0x1FDF8Cu) {
        ctx->pc = 0x1FDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF88u;
        // 0x1fdf8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF90u;
        goto label_1fdf90;
    }
    ctx->pc = 0x1FDF88u;
    SET_GPR_U32(ctx, 31, 0x1FDF90u);
    ctx->pc = 0x1FDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF88u;
    // 0x1fdf8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE140u, 0x1FDF88u, 0x1FDF90u)) {
        return;
    }
    ctx->pc = 0x1FDF90u;
label_1fdf90:
    // 0x1fdf90: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fdf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1fdf94:
    // 0x1fdf94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fdf94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf98:
    // 0x1fdf98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fdf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdf9c:
    // 0x1fdf9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdfa0:
    // 0x1fdfa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdfa4:
    // 0x1fdfa4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fdfa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdfa8:
    // 0x1fdfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdfac:
    // 0x1fdfac: 0x3e00008  jr          $ra
label_1fdfb0:
    if (ctx->pc == 0x1FDFB0u) {
        ctx->pc = 0x1FDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFACu;
        // 0x1fdfb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFB4u;
        goto label_1fdfb4;
    }
    ctx->pc = 0x1FDFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFACu;
        // 0x1fdfb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDFB4u;
label_1fdfb4:
    // 0x1fdfb4: 0x0  nop
    ctx->pc = 0x1fdfb4u;
    // NOP
label_1fdfb8:
    // 0x1fdfb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fdfb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fdfbc:
    // 0x1fdfbc: 0x0  nop
    ctx->pc = 0x1fdfbcu;
    // NOP
    ctx->pc = 0x1fdfc0u;
}
