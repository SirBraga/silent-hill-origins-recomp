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

// Function: sub_001AFB78
// Address: 0x1afb78 - 0x1afd58
void sub_001AFB78_0x1afb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFB78_0x1afb78");
#endif

    switch (ctx->pc) {
        case 0x1afb78u: goto label_1afb78;
        case 0x1afb7cu: goto label_1afb7c;
        case 0x1afb80u: goto label_1afb80;
        case 0x1afb84u: goto label_1afb84;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afb8cu: goto label_1afb8c;
        case 0x1afb90u: goto label_1afb90;
        case 0x1afb94u: goto label_1afb94;
        case 0x1afb98u: goto label_1afb98;
        case 0x1afb9cu: goto label_1afb9c;
        case 0x1afba0u: goto label_1afba0;
        case 0x1afba4u: goto label_1afba4;
        case 0x1afba8u: goto label_1afba8;
        case 0x1afbacu: goto label_1afbac;
        case 0x1afbb0u: goto label_1afbb0;
        case 0x1afbb4u: goto label_1afbb4;
        case 0x1afbb8u: goto label_1afbb8;
        case 0x1afbbcu: goto label_1afbbc;
        case 0x1afbc0u: goto label_1afbc0;
        case 0x1afbc4u: goto label_1afbc4;
        case 0x1afbc8u: goto label_1afbc8;
        case 0x1afbccu: goto label_1afbcc;
        case 0x1afbd0u: goto label_1afbd0;
        case 0x1afbd4u: goto label_1afbd4;
        case 0x1afbd8u: goto label_1afbd8;
        case 0x1afbdcu: goto label_1afbdc;
        case 0x1afbe0u: goto label_1afbe0;
        case 0x1afbe4u: goto label_1afbe4;
        case 0x1afbe8u: goto label_1afbe8;
        case 0x1afbecu: goto label_1afbec;
        case 0x1afbf0u: goto label_1afbf0;
        case 0x1afbf4u: goto label_1afbf4;
        case 0x1afbf8u: goto label_1afbf8;
        case 0x1afbfcu: goto label_1afbfc;
        case 0x1afc00u: goto label_1afc00;
        case 0x1afc04u: goto label_1afc04;
        case 0x1afc08u: goto label_1afc08;
        case 0x1afc0cu: goto label_1afc0c;
        case 0x1afc10u: goto label_1afc10;
        case 0x1afc14u: goto label_1afc14;
        case 0x1afc18u: goto label_1afc18;
        case 0x1afc1cu: goto label_1afc1c;
        case 0x1afc20u: goto label_1afc20;
        case 0x1afc24u: goto label_1afc24;
        case 0x1afc28u: goto label_1afc28;
        case 0x1afc2cu: goto label_1afc2c;
        case 0x1afc30u: goto label_1afc30;
        case 0x1afc34u: goto label_1afc34;
        case 0x1afc38u: goto label_1afc38;
        case 0x1afc3cu: goto label_1afc3c;
        case 0x1afc40u: goto label_1afc40;
        case 0x1afc44u: goto label_1afc44;
        case 0x1afc48u: goto label_1afc48;
        case 0x1afc4cu: goto label_1afc4c;
        case 0x1afc50u: goto label_1afc50;
        case 0x1afc54u: goto label_1afc54;
        case 0x1afc58u: goto label_1afc58;
        case 0x1afc5cu: goto label_1afc5c;
        case 0x1afc60u: goto label_1afc60;
        case 0x1afc64u: goto label_1afc64;
        case 0x1afc68u: goto label_1afc68;
        case 0x1afc6cu: goto label_1afc6c;
        case 0x1afc70u: goto label_1afc70;
        case 0x1afc74u: goto label_1afc74;
        case 0x1afc78u: goto label_1afc78;
        case 0x1afc7cu: goto label_1afc7c;
        case 0x1afc80u: goto label_1afc80;
        case 0x1afc84u: goto label_1afc84;
        case 0x1afc88u: goto label_1afc88;
        case 0x1afc8cu: goto label_1afc8c;
        case 0x1afc90u: goto label_1afc90;
        case 0x1afc94u: goto label_1afc94;
        case 0x1afc98u: goto label_1afc98;
        case 0x1afc9cu: goto label_1afc9c;
        case 0x1afca0u: goto label_1afca0;
        case 0x1afca4u: goto label_1afca4;
        case 0x1afca8u: goto label_1afca8;
        case 0x1afcacu: goto label_1afcac;
        case 0x1afcb0u: goto label_1afcb0;
        case 0x1afcb4u: goto label_1afcb4;
        case 0x1afcb8u: goto label_1afcb8;
        case 0x1afcbcu: goto label_1afcbc;
        case 0x1afcc0u: goto label_1afcc0;
        case 0x1afcc4u: goto label_1afcc4;
        case 0x1afcc8u: goto label_1afcc8;
        case 0x1afcccu: goto label_1afccc;
        case 0x1afcd0u: goto label_1afcd0;
        case 0x1afcd4u: goto label_1afcd4;
        case 0x1afcd8u: goto label_1afcd8;
        case 0x1afcdcu: goto label_1afcdc;
        case 0x1afce0u: goto label_1afce0;
        case 0x1afce4u: goto label_1afce4;
        case 0x1afce8u: goto label_1afce8;
        case 0x1afcecu: goto label_1afcec;
        case 0x1afcf0u: goto label_1afcf0;
        case 0x1afcf4u: goto label_1afcf4;
        case 0x1afcf8u: goto label_1afcf8;
        case 0x1afcfcu: goto label_1afcfc;
        case 0x1afd00u: goto label_1afd00;
        case 0x1afd04u: goto label_1afd04;
        case 0x1afd08u: goto label_1afd08;
        case 0x1afd0cu: goto label_1afd0c;
        case 0x1afd10u: goto label_1afd10;
        case 0x1afd14u: goto label_1afd14;
        case 0x1afd18u: goto label_1afd18;
        case 0x1afd1cu: goto label_1afd1c;
        case 0x1afd20u: goto label_1afd20;
        case 0x1afd24u: goto label_1afd24;
        case 0x1afd28u: goto label_1afd28;
        case 0x1afd2cu: goto label_1afd2c;
        case 0x1afd30u: goto label_1afd30;
        case 0x1afd34u: goto label_1afd34;
        case 0x1afd38u: goto label_1afd38;
        case 0x1afd3cu: goto label_1afd3c;
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd44u: goto label_1afd44;
        case 0x1afd48u: goto label_1afd48;
        case 0x1afd4cu: goto label_1afd4c;
        case 0x1afd50u: goto label_1afd50;
        case 0x1afd54u: goto label_1afd54;
        default: break;
    }

    ctx->pc = 0x1afb78u;

label_1afb78:
    // 0x1afb78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1afb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1afb7c:
    // 0x1afb7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1afb80:
    // 0x1afb80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1afb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afb84:
    // 0x1afb84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1afb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1afb88:
    // 0x1afb88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1afb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1afb8c:
    // 0x1afb8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1afb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1afb90:
    // 0x1afb90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1afb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1afb94:
    // 0x1afb94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1afb98:
    // 0x1afb98: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1afb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1afb9c:
    // 0x1afb9c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afba0:
    // 0x1afba0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1afba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1afba4:
    // 0x1afba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1afba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1afba8:
    // 0x1afba8: 0xc075d62  jal         func_1D7588
label_1afbac:
    if (ctx->pc == 0x1AFBACu) {
        ctx->pc = 0x1AFBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA8u;
        // 0x1afbac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBB0u;
        goto label_1afbb0;
    }
    ctx->pc = 0x1AFBA8u;
    SET_GPR_U32(ctx, 31, 0x1AFBB0u);
    ctx->pc = 0x1AFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBA8u;
    // 0x1afbac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x1AFBA8u, 0x1AFBB0u)) {
        return;
    }
    ctx->pc = 0x1AFBB0u;
label_1afbb0:
    // 0x1afbb0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1afbb4:
    if (ctx->pc == 0x1AFBB4u) {
        ctx->pc = 0x1AFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB0u;
        // 0x1afbb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBB8u;
        goto label_1afbb8;
    }
    ctx->pc = 0x1AFBB0u;
    {
        const bool branch_taken_0x1afbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB0u;
        // 0x1afbb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbb0) {
            ctx->pc = 0x1AFBCCu;
            goto label_1afbcc;
        }
    }
    ctx->pc = 0x1AFBB8u;
label_1afbb8:
    // 0x1afbb8: 0xc06ca02  jal         func_1B2808
label_1afbbc:
    if (ctx->pc == 0x1AFBBCu) {
        ctx->pc = 0x1AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB8u;
        // 0x1afbbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBC0u;
        goto label_1afbc0;
    }
    ctx->pc = 0x1AFBB8u;
    SET_GPR_U32(ctx, 31, 0x1AFBC0u);
    ctx->pc = 0x1AFBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBB8u;
    // 0x1afbbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2808u, 0x1AFBB8u, 0x1AFBC0u)) {
        return;
    }
    ctx->pc = 0x1AFBC0u;
label_1afbc0:
    // 0x1afbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afbc4:
    // 0x1afbc4: 0x10000049  b           . + 4 + (0x49 << 2)
label_1afbc8:
    if (ctx->pc == 0x1AFBC8u) {
        ctx->pc = 0x1AFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBC4u;
        // 0x1afbc8: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBCCu;
        goto label_1afbcc;
    }
    ctx->pc = 0x1AFBC4u;
    {
        const bool branch_taken_0x1afbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBC4u;
        // 0x1afbc8: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbc4) {
            ctx->pc = 0x1AFCECu;
            goto label_1afcec;
        }
    }
    ctx->pc = 0x1AFBCCu;
label_1afbcc:
    // 0x1afbcc: 0xc06c8fc  jal         func_1B23F0
label_1afbd0:
    if (ctx->pc == 0x1AFBD0u) {
        ctx->pc = 0x1AFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBCCu;
        // 0x1afbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBD4u;
        goto label_1afbd4;
    }
    ctx->pc = 0x1AFBCCu;
    SET_GPR_U32(ctx, 31, 0x1AFBD4u);
    ctx->pc = 0x1AFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBCCu;
    // 0x1afbd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B23F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B23F0u, 0x1AFBCCu, 0x1AFBD4u)) {
        return;
    }
    ctx->pc = 0x1AFBD4u;
label_1afbd4:
    // 0x1afbd4: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x1afbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_1afbd8:
    // 0x1afbd8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1afbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1afbdc:
    // 0x1afbdc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1afbe0:
    if (ctx->pc == 0x1AFBE0u) {
        ctx->pc = 0x1AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBDCu;
        // 0x1afbe0: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBE4u;
        goto label_1afbe4;
    }
    ctx->pc = 0x1AFBDCu;
    {
        const bool branch_taken_0x1afbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afbdc) {
            ctx->pc = 0x1AFBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFBDCu;
            // 0x1afbe0: 0x8e220150  lw          $v0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFBFCu;
            goto label_1afbfc;
        }
    }
    ctx->pc = 0x1AFBE4u;
label_1afbe4:
    // 0x1afbe4: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1afbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1afbe8:
    // 0x1afbe8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1afbe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1afbec:
    // 0x1afbec: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1afbf0:
    // 0x1afbf0: 0x60f809  jalr        $v1
label_1afbf4:
    if (ctx->pc == 0x1AFBF4u) {
        ctx->pc = 0x1AFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF0u;
        // 0x1afbf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFBF8u;
        goto label_1afbf8;
    }
    ctx->pc = 0x1AFBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFBF8u);
        ctx->pc = 0x1AFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF0u;
        // 0x1afbf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFBF0u, 0x1AFBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFBF8u;
label_1afbf8:
    // 0x1afbf8: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1afbfc:
    // 0x1afbfc: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
label_1afc00:
    // 0x1afc00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1afc04:
    if (ctx->pc == 0x1AFC04u) {
        ctx->pc = 0x1AFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC00u;
        // 0x1afc04: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC08u;
        goto label_1afc08;
    }
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC00u;
        // 0x1afc04: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC24u;
            goto label_1afc24;
        }
    }
    ctx->pc = 0x1AFC08u;
label_1afc08:
    // 0x1afc08: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1afc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1afc0c:
    // 0x1afc0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1afc10:
    if (ctx->pc == 0x1AFC10u) {
        ctx->pc = 0x1AFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC0Cu;
        // 0x1afc10: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC14u;
        goto label_1afc14;
    }
    ctx->pc = 0x1AFC0Cu;
    {
        const bool branch_taken_0x1afc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC0Cu;
        // 0x1afc10: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc0c) {
            ctx->pc = 0x1AFC24u;
            goto label_1afc24;
        }
    }
    ctx->pc = 0x1AFC14u;
label_1afc14:
    // 0x1afc14: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_1afc18:
    // 0x1afc18: 0xc091c52  jal         func_247148
label_1afc1c:
    if (ctx->pc == 0x1AFC1Cu) {
        ctx->pc = 0x1AFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC18u;
        // 0x1afc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC20u;
        goto label_1afc20;
    }
    ctx->pc = 0x1AFC18u;
    SET_GPR_U32(ctx, 31, 0x1AFC20u);
    ctx->pc = 0x1AFC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC18u;
    // 0x1afc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x1AFC18u, 0x1AFC20u)) {
        return;
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x1afc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_1afc24:
    // 0x1afc24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1afc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1afc28:
    // 0x1afc28: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1afc2c:
    // 0x1afc2c: 0x8c64f020  lw          $a0, -0xFE0($v1)
    ctx->pc = 0x1afc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963232)));
label_1afc30:
    // 0x1afc30: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1afc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1afc34:
    // 0x1afc34: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1afc38:
    if (ctx->pc == 0x1AFC38u) {
        ctx->pc = 0x1AFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC34u;
        // 0x1afc38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC3Cu;
        goto label_1afc3c;
    }
    ctx->pc = 0x1AFC34u;
    {
        const bool branch_taken_0x1afc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC34u;
        // 0x1afc38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc34) {
            ctx->pc = 0x1AFC58u;
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC3Cu;
label_1afc3c:
    // 0x1afc3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1afc40:
    // 0x1afc40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1afc44:
    if (ctx->pc == 0x1AFC44u) {
        ctx->pc = 0x1AFC48u;
        goto label_1afc48;
    }
    ctx->pc = 0x1AFC40u;
    {
        const bool branch_taken_0x1afc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc40) {
            ctx->pc = 0x1AFC58u;
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFC48u;
label_1afc48:
    // 0x1afc48: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1afc4c:
    // 0x1afc4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afc50:
    // 0x1afc50: 0xc07fd18  jal         func_1FF460
label_1afc54:
    if (ctx->pc == 0x1AFC54u) {
        ctx->pc = 0x1AFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC50u;
        // 0x1afc54: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC58u;
        goto label_1afc58;
    }
    ctx->pc = 0x1AFC50u;
    SET_GPR_U32(ctx, 31, 0x1AFC58u);
    ctx->pc = 0x1AFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC50u;
    // 0x1afc54: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AFC50u, 0x1AFC58u)) {
        return;
    }
    ctx->pc = 0x1AFC58u;
label_1afc58:
    // 0x1afc58: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_1afc5c:
    if (ctx->pc == 0x1AFC5Cu) {
        ctx->pc = 0x1AFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC58u;
        // 0x1afc5c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC60u;
        goto label_1afc60;
    }
    ctx->pc = 0x1AFC58u;
    {
        const bool branch_taken_0x1afc58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC58u;
        // 0x1afc5c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc58) {
            ctx->pc = 0x1AFC9Cu;
            goto label_1afc9c;
        }
    }
    ctx->pc = 0x1AFC60u;
label_1afc60:
    // 0x1afc60: 0xc075d76  jal         func_1D75D8
label_1afc64:
    if (ctx->pc == 0x1AFC64u) {
        ctx->pc = 0x1AFC68u;
        goto label_1afc68;
    }
    ctx->pc = 0x1AFC60u;
    SET_GPR_U32(ctx, 31, 0x1AFC68u);
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x1AFC60u, 0x1AFC68u)) {
        return;
    }
    ctx->pc = 0x1AFC68u;
label_1afc68:
    // 0x1afc68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1afc6c:
    // 0x1afc6c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1afc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1afc70:
    // 0x1afc70: 0x8c44bcd0  lw          $a0, -0x4330($v0)
    ctx->pc = 0x1afc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950096)));
label_1afc74:
    // 0x1afc74: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1afc78:
    if (ctx->pc == 0x1AFC78u) {
        ctx->pc = 0x1AFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC74u;
        // 0x1afc78: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC7Cu;
        goto label_1afc7c;
    }
    ctx->pc = 0x1AFC74u;
    {
        const bool branch_taken_0x1afc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC74u;
        // 0x1afc78: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc74) {
            ctx->pc = 0x1AFCA0u;
            goto label_1afca0;
        }
    }
    ctx->pc = 0x1AFC7Cu;
label_1afc7c:
    // 0x1afc7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1afc80:
    // 0x1afc80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1afc84:
    if (ctx->pc == 0x1AFC84u) {
        ctx->pc = 0x1AFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC80u;
        // 0x1afc84: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC88u;
        goto label_1afc88;
    }
    ctx->pc = 0x1AFC80u;
    {
        const bool branch_taken_0x1afc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC80u;
        // 0x1afc84: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc80) {
            ctx->pc = 0x1AFCA0u;
            goto label_1afca0;
        }
    }
    ctx->pc = 0x1AFC88u;
label_1afc88:
    // 0x1afc88: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1afc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1afc8c:
    // 0x1afc8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afc90:
    // 0x1afc90: 0xc07fd18  jal         func_1FF460
label_1afc94:
    if (ctx->pc == 0x1AFC94u) {
        ctx->pc = 0x1AFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC90u;
        // 0x1afc94: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFC98u;
        goto label_1afc98;
    }
    ctx->pc = 0x1AFC90u;
    SET_GPR_U32(ctx, 31, 0x1AFC98u);
    ctx->pc = 0x1AFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC90u;
    // 0x1afc94: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AFC90u, 0x1AFC98u)) {
        return;
    }
    ctx->pc = 0x1AFC98u;
label_1afc98:
    // 0x1afc98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1afc9c:
    // 0x1afc9c: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1afca0:
    // 0x1afca0: 0x8c444340  lw          $a0, 0x4340($v0)
    ctx->pc = 0x1afca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17216)));
label_1afca4:
    // 0x1afca4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_1afca8:
    if (ctx->pc == 0x1AFCA8u) {
        ctx->pc = 0x1AFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCA4u;
        // 0x1afca8: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCACu;
        goto label_1afcac;
    }
    ctx->pc = 0x1AFCA4u;
    {
        const bool branch_taken_0x1afca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1afca4) {
            ctx->pc = 0x1AFCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFCA4u;
            // 0x1afca8: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFCCCu;
            goto label_1afccc;
        }
    }
    ctx->pc = 0x1AFCACu;
label_1afcac:
    // 0x1afcac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1afcb0:
    // 0x1afcb0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1afcb4:
    if (ctx->pc == 0x1AFCB4u) {
        ctx->pc = 0x1AFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCB0u;
        // 0x1afcb4: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCB8u;
        goto label_1afcb8;
    }
    ctx->pc = 0x1AFCB0u;
    {
        const bool branch_taken_0x1afcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afcb0) {
            ctx->pc = 0x1AFCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFCB0u;
            // 0x1afcb4: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFCCCu;
            goto label_1afccc;
        }
    }
    ctx->pc = 0x1AFCB8u;
label_1afcb8:
    // 0x1afcb8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1afcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1afcbc:
    // 0x1afcbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afcc0:
    // 0x1afcc0: 0xc07fd18  jal         func_1FF460
label_1afcc4:
    if (ctx->pc == 0x1AFCC4u) {
        ctx->pc = 0x1AFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCC0u;
        // 0x1afcc4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCC8u;
        goto label_1afcc8;
    }
    ctx->pc = 0x1AFCC0u;
    SET_GPR_U32(ctx, 31, 0x1AFCC8u);
    ctx->pc = 0x1AFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCC0u;
    // 0x1afcc4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AFCC0u, 0x1AFCC8u)) {
        return;
    }
    ctx->pc = 0x1AFCC8u;
label_1afcc8:
    // 0x1afcc8: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x1afcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
label_1afccc:
    // 0x1afccc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1afcd0:
    if (ctx->pc == 0x1AFCD0u) {
        ctx->pc = 0x1AFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCCCu;
        // 0x1afcd0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCD4u;
        goto label_1afcd4;
    }
    ctx->pc = 0x1AFCCCu;
    {
        const bool branch_taken_0x1afccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCCCu;
        // 0x1afcd0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afccc) {
            ctx->pc = 0x1AFCECu;
            goto label_1afcec;
        }
    }
    ctx->pc = 0x1AFCD4u;
label_1afcd4:
    // 0x1afcd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afcd8:
    // 0x1afcd8: 0xc05eee2  jal         func_17BB88
label_1afcdc:
    if (ctx->pc == 0x1AFCDCu) {
        ctx->pc = 0x1AFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCD8u;
        // 0x1afcdc: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCE0u;
        goto label_1afce0;
    }
    ctx->pc = 0x1AFCD8u;
    SET_GPR_U32(ctx, 31, 0x1AFCE0u);
    ctx->pc = 0x1AFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCD8u;
    // 0x1afcdc: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x1AFCD8u, 0x1AFCE0u)) {
        return;
    }
    ctx->pc = 0x1AFCE0u;
label_1afce0:
    // 0x1afce0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1afce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1afce4:
    // 0x1afce4: 0xc076068  jal         func_1D81A0
label_1afce8:
    if (ctx->pc == 0x1AFCE8u) {
        ctx->pc = 0x1AFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCE4u;
        // 0x1afce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCECu;
        goto label_1afcec;
    }
    ctx->pc = 0x1AFCE4u;
    SET_GPR_U32(ctx, 31, 0x1AFCECu);
    ctx->pc = 0x1AFCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE4u;
    // 0x1afce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1AFCE4u, 0x1AFCECu)) {
        return;
    }
    ctx->pc = 0x1AFCECu;
label_1afcec:
    // 0x1afcec: 0xc06c2ac  jal         func_1B0AB0
label_1afcf0:
    if (ctx->pc == 0x1AFCF0u) {
        ctx->pc = 0x1AFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCECu;
        // 0x1afcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFCF4u;
        goto label_1afcf4;
    }
    ctx->pc = 0x1AFCECu;
    SET_GPR_U32(ctx, 31, 0x1AFCF4u);
    ctx->pc = 0x1AFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCECu;
    // 0x1afcf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0AB0u, 0x1AFCECu, 0x1AFCF4u)) {
        return;
    }
    ctx->pc = 0x1AFCF4u;
label_1afcf4:
    // 0x1afcf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1afcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1afcf8:
    // 0x1afcf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afcfc:
    // 0x1afcfc: 0x24504710  addiu       $s0, $v0, 0x4710
    ctx->pc = 0x1afcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
label_1afd00:
    // 0x1afd00: 0xc07fcce  jal         func_1FF338
label_1afd04:
    if (ctx->pc == 0x1AFD04u) {
        ctx->pc = 0x1AFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD00u;
        // 0x1afd04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD08u;
        goto label_1afd08;
    }
    ctx->pc = 0x1AFD00u;
    SET_GPR_U32(ctx, 31, 0x1AFD08u);
    ctx->pc = 0x1AFD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD00u;
    // 0x1afd04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1AFD00u, 0x1AFD08u)) {
        return;
    }
    ctx->pc = 0x1AFD08u;
label_1afd08:
    // 0x1afd08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1afd0c:
    if (ctx->pc == 0x1AFD0Cu) {
        ctx->pc = 0x1AFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD08u;
        // 0x1afd0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD10u;
        goto label_1afd10;
    }
    ctx->pc = 0x1AFD08u;
    {
        const bool branch_taken_0x1afd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD08u;
        // 0x1afd0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd08) {
            ctx->pc = 0x1AFD18u;
            goto label_1afd18;
        }
    }
    ctx->pc = 0x1AFD10u;
label_1afd10:
    // 0x1afd10: 0xc07fb0c  jal         func_1FEC30
label_1afd14:
    if (ctx->pc == 0x1AFD14u) {
        ctx->pc = 0x1AFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD10u;
        // 0x1afd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD18u;
        goto label_1afd18;
    }
    ctx->pc = 0x1AFD10u;
    SET_GPR_U32(ctx, 31, 0x1AFD18u);
    ctx->pc = 0x1AFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD10u;
    // 0x1afd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AFD10u, 0x1AFD18u)) {
        return;
    }
    ctx->pc = 0x1AFD18u;
label_1afd18:
    // 0x1afd18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1afd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1afd1c:
    // 0x1afd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afd20:
    // 0x1afd20: 0x24504718  addiu       $s0, $v0, 0x4718
    ctx->pc = 0x1afd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18200));
label_1afd24:
    // 0x1afd24: 0xc07fcce  jal         func_1FF338
label_1afd28:
    if (ctx->pc == 0x1AFD28u) {
        ctx->pc = 0x1AFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD24u;
        // 0x1afd28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD2Cu;
        goto label_1afd2c;
    }
    ctx->pc = 0x1AFD24u;
    SET_GPR_U32(ctx, 31, 0x1AFD2Cu);
    ctx->pc = 0x1AFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD24u;
    // 0x1afd28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1AFD24u, 0x1AFD2Cu)) {
        return;
    }
    ctx->pc = 0x1AFD2Cu;
label_1afd2c:
    // 0x1afd2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1afd30:
    if (ctx->pc == 0x1AFD30u) {
        ctx->pc = 0x1AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD2Cu;
        // 0x1afd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD34u;
        goto label_1afd34;
    }
    ctx->pc = 0x1AFD2Cu;
    {
        const bool branch_taken_0x1afd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD2Cu;
        // 0x1afd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd2c) {
            ctx->pc = 0x1AFD3Cu;
            goto label_1afd3c;
        }
    }
    ctx->pc = 0x1AFD34u;
label_1afd34:
    // 0x1afd34: 0xc07fb0c  jal         func_1FEC30
label_1afd38:
    if (ctx->pc == 0x1AFD38u) {
        ctx->pc = 0x1AFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD34u;
        // 0x1afd38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD3Cu;
        goto label_1afd3c;
    }
    ctx->pc = 0x1AFD34u;
    SET_GPR_U32(ctx, 31, 0x1AFD3Cu);
    ctx->pc = 0x1AFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD34u;
    // 0x1afd38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AFD34u, 0x1AFD3Cu)) {
        return;
    }
    ctx->pc = 0x1AFD3Cu;
label_1afd3c:
    // 0x1afd3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1afd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1afd40:
    // 0x1afd40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1afd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1afd44:
    // 0x1afd44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1afd48:
    // 0x1afd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afd4c:
    // 0x1afd4c: 0x3e00008  jr          $ra
label_1afd50:
    if (ctx->pc == 0x1AFD50u) {
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFD54u;
        goto label_1afd54;
    }
    ctx->pc = 0x1AFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFD54u;
label_1afd54:
    // 0x1afd54: 0x0  nop
    ctx->pc = 0x1afd54u;
    // NOP
    ctx->pc = 0x1afd58u;
}
