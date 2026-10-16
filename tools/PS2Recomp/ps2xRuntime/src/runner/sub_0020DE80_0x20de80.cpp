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

// Function: sub_0020DE80
// Address: 0x20de80 - 0x20e0b0
void sub_0020DE80_0x20de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DE80_0x20de80");
#endif

    switch (ctx->pc) {
        case 0x20de80u: goto label_20de80;
        case 0x20de84u: goto label_20de84;
        case 0x20de88u: goto label_20de88;
        case 0x20de8cu: goto label_20de8c;
        case 0x20de90u: goto label_20de90;
        case 0x20de94u: goto label_20de94;
        case 0x20de98u: goto label_20de98;
        case 0x20de9cu: goto label_20de9c;
        case 0x20dea0u: goto label_20dea0;
        case 0x20dea4u: goto label_20dea4;
        case 0x20dea8u: goto label_20dea8;
        case 0x20deacu: goto label_20deac;
        case 0x20deb0u: goto label_20deb0;
        case 0x20deb4u: goto label_20deb4;
        case 0x20deb8u: goto label_20deb8;
        case 0x20debcu: goto label_20debc;
        case 0x20dec0u: goto label_20dec0;
        case 0x20dec4u: goto label_20dec4;
        case 0x20dec8u: goto label_20dec8;
        case 0x20deccu: goto label_20decc;
        case 0x20ded0u: goto label_20ded0;
        case 0x20ded4u: goto label_20ded4;
        case 0x20ded8u: goto label_20ded8;
        case 0x20dedcu: goto label_20dedc;
        case 0x20dee0u: goto label_20dee0;
        case 0x20dee4u: goto label_20dee4;
        case 0x20dee8u: goto label_20dee8;
        case 0x20deecu: goto label_20deec;
        case 0x20def0u: goto label_20def0;
        case 0x20def4u: goto label_20def4;
        case 0x20def8u: goto label_20def8;
        case 0x20defcu: goto label_20defc;
        case 0x20df00u: goto label_20df00;
        case 0x20df04u: goto label_20df04;
        case 0x20df08u: goto label_20df08;
        case 0x20df0cu: goto label_20df0c;
        case 0x20df10u: goto label_20df10;
        case 0x20df14u: goto label_20df14;
        case 0x20df18u: goto label_20df18;
        case 0x20df1cu: goto label_20df1c;
        case 0x20df20u: goto label_20df20;
        case 0x20df24u: goto label_20df24;
        case 0x20df28u: goto label_20df28;
        case 0x20df2cu: goto label_20df2c;
        case 0x20df30u: goto label_20df30;
        case 0x20df34u: goto label_20df34;
        case 0x20df38u: goto label_20df38;
        case 0x20df3cu: goto label_20df3c;
        case 0x20df40u: goto label_20df40;
        case 0x20df44u: goto label_20df44;
        case 0x20df48u: goto label_20df48;
        case 0x20df4cu: goto label_20df4c;
        case 0x20df50u: goto label_20df50;
        case 0x20df54u: goto label_20df54;
        case 0x20df58u: goto label_20df58;
        case 0x20df5cu: goto label_20df5c;
        case 0x20df60u: goto label_20df60;
        case 0x20df64u: goto label_20df64;
        case 0x20df68u: goto label_20df68;
        case 0x20df6cu: goto label_20df6c;
        case 0x20df70u: goto label_20df70;
        case 0x20df74u: goto label_20df74;
        case 0x20df78u: goto label_20df78;
        case 0x20df7cu: goto label_20df7c;
        case 0x20df80u: goto label_20df80;
        case 0x20df84u: goto label_20df84;
        case 0x20df88u: goto label_20df88;
        case 0x20df8cu: goto label_20df8c;
        case 0x20df90u: goto label_20df90;
        case 0x20df94u: goto label_20df94;
        case 0x20df98u: goto label_20df98;
        case 0x20df9cu: goto label_20df9c;
        case 0x20dfa0u: goto label_20dfa0;
        case 0x20dfa4u: goto label_20dfa4;
        case 0x20dfa8u: goto label_20dfa8;
        case 0x20dfacu: goto label_20dfac;
        case 0x20dfb0u: goto label_20dfb0;
        case 0x20dfb4u: goto label_20dfb4;
        case 0x20dfb8u: goto label_20dfb8;
        case 0x20dfbcu: goto label_20dfbc;
        case 0x20dfc0u: goto label_20dfc0;
        case 0x20dfc4u: goto label_20dfc4;
        case 0x20dfc8u: goto label_20dfc8;
        case 0x20dfccu: goto label_20dfcc;
        case 0x20dfd0u: goto label_20dfd0;
        case 0x20dfd4u: goto label_20dfd4;
        case 0x20dfd8u: goto label_20dfd8;
        case 0x20dfdcu: goto label_20dfdc;
        case 0x20dfe0u: goto label_20dfe0;
        case 0x20dfe4u: goto label_20dfe4;
        case 0x20dfe8u: goto label_20dfe8;
        case 0x20dfecu: goto label_20dfec;
        case 0x20dff0u: goto label_20dff0;
        case 0x20dff4u: goto label_20dff4;
        case 0x20dff8u: goto label_20dff8;
        case 0x20dffcu: goto label_20dffc;
        case 0x20e000u: goto label_20e000;
        case 0x20e004u: goto label_20e004;
        case 0x20e008u: goto label_20e008;
        case 0x20e00cu: goto label_20e00c;
        case 0x20e010u: goto label_20e010;
        case 0x20e014u: goto label_20e014;
        case 0x20e018u: goto label_20e018;
        case 0x20e01cu: goto label_20e01c;
        case 0x20e020u: goto label_20e020;
        case 0x20e024u: goto label_20e024;
        case 0x20e028u: goto label_20e028;
        case 0x20e02cu: goto label_20e02c;
        case 0x20e030u: goto label_20e030;
        case 0x20e034u: goto label_20e034;
        case 0x20e038u: goto label_20e038;
        case 0x20e03cu: goto label_20e03c;
        case 0x20e040u: goto label_20e040;
        case 0x20e044u: goto label_20e044;
        case 0x20e048u: goto label_20e048;
        case 0x20e04cu: goto label_20e04c;
        case 0x20e050u: goto label_20e050;
        case 0x20e054u: goto label_20e054;
        case 0x20e058u: goto label_20e058;
        case 0x20e05cu: goto label_20e05c;
        case 0x20e060u: goto label_20e060;
        case 0x20e064u: goto label_20e064;
        case 0x20e068u: goto label_20e068;
        case 0x20e06cu: goto label_20e06c;
        case 0x20e070u: goto label_20e070;
        case 0x20e074u: goto label_20e074;
        case 0x20e078u: goto label_20e078;
        case 0x20e07cu: goto label_20e07c;
        case 0x20e080u: goto label_20e080;
        case 0x20e084u: goto label_20e084;
        case 0x20e088u: goto label_20e088;
        case 0x20e08cu: goto label_20e08c;
        case 0x20e090u: goto label_20e090;
        case 0x20e094u: goto label_20e094;
        case 0x20e098u: goto label_20e098;
        case 0x20e09cu: goto label_20e09c;
        case 0x20e0a0u: goto label_20e0a0;
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0a8u: goto label_20e0a8;
        case 0x20e0acu: goto label_20e0ac;
        default: break;
    }

    ctx->pc = 0x20de80u;

label_20de80:
    // 0x20de80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20de84:
    // 0x20de84: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20de88:
    // 0x20de88: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20de8c:
    // 0x20de8c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x20de8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20de90:
    // 0x20de90: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20de90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20de94:
    // 0x20de94: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x20de94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20de98:
    // 0x20de98: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20de9c:
    // 0x20de9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20de9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20dea0:
    // 0x20dea0: 0x1e283c  dsll32      $a1, $fp, 0
    ctx->pc = 0x20dea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << (32 + 0));
label_20dea4:
    // 0x20dea4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20dea8:
    // 0x20dea8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20deac:
    // 0x20deac: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x20deacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20deb0:
    // 0x20deb0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20deb4:
    // 0x20deb4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20deb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20deb8:
    // 0x20deb8: 0x3c043b9a  lui         $a0, 0x3B9A
    ctx->pc = 0x20deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15258 << 16));
label_20debc:
    // 0x20debc: 0x3484c9f0  ori         $a0, $a0, 0xC9F0
    ctx->pc = 0x20debcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51696);
label_20dec0:
    // 0x20dec0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20dec4:
    // 0x20dec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20dec8:
    // 0x20dec8: 0xc0ca2b8  jal         func_328AE0
label_20decc:
    if (ctx->pc == 0x20DECCu) {
        ctx->pc = 0x20DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEC8u;
        // 0x20decc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DED0u;
        goto label_20ded0;
    }
    ctx->pc = 0x20DEC8u;
    SET_GPR_U32(ctx, 31, 0x20DED0u);
    ctx->pc = 0x20DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEC8u;
    // 0x20decc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20DEC8u, 0x20DED0u)) {
        return;
    }
    ctx->pc = 0x20DED0u;
label_20ded0:
    // 0x20ded0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ded0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ded4:
    // 0x20ded4: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
label_20ded8:
    if (ctx->pc == 0x20DED8u) {
        ctx->pc = 0x20DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DED4u;
        // 0x20ded8: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DEDCu;
        goto label_20dedc;
    }
    ctx->pc = 0x20DED4u;
    {
        const bool branch_taken_0x20ded4 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x20DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DED4u;
        // 0x20ded8: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ded4) {
            ctx->pc = 0x20DEF8u;
            goto label_20def8;
        }
    }
    ctx->pc = 0x20DEDCu;
label_20dedc:
    // 0x20dedc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dee0:
    // 0x20dee0: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_20dee4:
    // 0x20dee4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20dee8:
    // 0x20dee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20deec:
    // 0x20deec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20deecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20def0:
    // 0x20def0: 0x60f809  jalr        $v1
label_20def4:
    if (ctx->pc == 0x20DEF4u) {
        ctx->pc = 0x20DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEF0u;
        // 0x20def4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DEF8u;
        goto label_20def8;
    }
    ctx->pc = 0x20DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DEF8u);
        ctx->pc = 0x20DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEF0u;
        // 0x20def4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DEF0u, 0x20DEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DEF8u;
label_20def8:
    // 0x20def8: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x20def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_20defc:
    // 0x20defc: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x20defcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
label_20df00:
    // 0x20df00: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x20df00u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_20df04:
    // 0x20df04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20df08:
    // 0x20df08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20df0c:
    // 0x20df0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20df0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20df10:
    // 0x20df10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20df10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20df14:
    // 0x20df14: 0x2c2a00a  movz        $s4, $s6, $v0
    ctx->pc = 0x20df14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22));
label_20df18:
    // 0x20df18: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_20df1c:
    // 0x20df1c: 0xae540060  sw          $s4, 0x60($s2)
    ctx->pc = 0x20df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 20));
label_20df20:
    // 0x20df20: 0xc08371a  jal         func_20DC68
label_20df24:
    if (ctx->pc == 0x20DF24u) {
        ctx->pc = 0x20DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF20u;
        // 0x20df24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF28u;
        goto label_20df28;
    }
    ctx->pc = 0x20DF20u;
    SET_GPR_U32(ctx, 31, 0x20DF28u);
    ctx->pc = 0x20DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF20u;
    // 0x20df24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20DC68u, 0x20DF20u, 0x20DF28u)) {
        return;
    }
    ctx->pc = 0x20DF28u;
label_20df28:
    // 0x20df28: 0x12c00054  beqz        $s6, . + 4 + (0x54 << 2)
label_20df2c:
    if (ctx->pc == 0x20DF2Cu) {
        ctx->pc = 0x20DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF28u;
        // 0x20df2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF30u;
        goto label_20df30;
    }
    ctx->pc = 0x20DF28u;
    {
        const bool branch_taken_0x20df28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF28u;
        // 0x20df2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df28) {
            ctx->pc = 0x20E07Cu;
            goto label_20e07c;
        }
    }
    ctx->pc = 0x20DF30u;
label_20df30:
    // 0x20df30: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_20df34:
    // 0x20df34: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20df34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20df38:
    // 0x20df38: 0x2d32023  subu        $a0, $s6, $s3
    ctx->pc = 0x20df38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_20df3c:
    // 0x20df3c: 0x0  nop
    ctx->pc = 0x20df3cu;
    // NOP
label_20df40:
    // 0x20df40: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x20df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
label_20df44:
    // 0x20df44: 0x284182b  sltu        $v1, $s4, $a0
    ctx->pc = 0x20df44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20df48:
    // 0x20df48: 0x3442c9f0  ori         $v0, $v0, 0xC9F0
    ctx->pc = 0x20df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51696);
label_20df4c:
    // 0x20df4c: 0x83a00a  movz        $s4, $a0, $v1
    ctx->pc = 0x20df4cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4));
label_20df50:
    // 0x20df50: 0x29e9018  mult        $s2, $s4, $fp
    ctx->pc = 0x20df50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_20df54:
    // 0x20df54: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20df54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_20df58:
    // 0x20df58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20df5c:
    if (ctx->pc == 0x20DF5Cu) {
        ctx->pc = 0x20DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF58u;
        // 0x20df5c: 0x8e350004  lw          $s5, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF60u;
        goto label_20df60;
    }
    ctx->pc = 0x20DF58u;
    {
        const bool branch_taken_0x20df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF58u;
        // 0x20df5c: 0x8e350004  lw          $s5, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df58) {
            ctx->pc = 0x20DF88u;
            goto label_20df88;
        }
    }
    ctx->pc = 0x20DF60u;
label_20df60:
    // 0x20df60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20df64:
    // 0x20df64: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20df68:
    // 0x20df68: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x20df68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_20df6c:
    // 0x20df6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20df70:
    // 0x20df70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20df74:
    // 0x20df74: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x20df74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_20df78:
    // 0x20df78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20df7c:
    // 0x20df7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20df80:
    // 0x20df80: 0x40f809  jalr        $v0
label_20df84:
    if (ctx->pc == 0x20DF84u) {
        ctx->pc = 0x20DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF80u;
        // 0x20df84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF88u;
        goto label_20df88;
    }
    ctx->pc = 0x20DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DF88u);
        ctx->pc = 0x20DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF80u;
        // 0x20df84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DF80u, 0x20DF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DF88u;
label_20df88:
    // 0x20df88: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x20df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_20df8c:
    // 0x20df8c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20df90:
    if (ctx->pc == 0x20DF90u) {
        ctx->pc = 0x20DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF8Cu;
        // 0x20df90: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF94u;
        goto label_20df94;
    }
    ctx->pc = 0x20DF8Cu;
    {
        const bool branch_taken_0x20df8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF8Cu;
        // 0x20df90: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df8c) {
            ctx->pc = 0x20DF98u;
            goto label_20df98;
        }
    }
    ctx->pc = 0x20DF94u;
label_20df94:
    // 0x20df94: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x20df94u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20df98:
    // 0x20df98: 0x2ee20002  sltiu       $v0, $s7, 0x2
    ctx->pc = 0x20df98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20df9c:
    // 0x20df9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20dfa0:
    if (ctx->pc == 0x20DFA0u) {
        ctx->pc = 0x20DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF9Cu;
        // 0x20dfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFA4u;
        goto label_20dfa4;
    }
    ctx->pc = 0x20DF9Cu;
    {
        const bool branch_taken_0x20df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF9Cu;
        // 0x20dfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df9c) {
            ctx->pc = 0x20DFCCu;
            goto label_20dfcc;
        }
    }
    ctx->pc = 0x20DFA4u;
label_20dfa4:
    // 0x20dfa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dfa8:
    // 0x20dfa8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20dfac:
    // 0x20dfac: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20dfb0:
    // 0x20dfb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dfb4:
    // 0x20dfb4: 0xac570018  sw          $s7, 0x18($v0)
    ctx->pc = 0x20dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 23));
label_20dfb8:
    // 0x20dfb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dfbc:
    // 0x20dfbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20dfc0:
    // 0x20dfc0: 0x40f809  jalr        $v0
label_20dfc4:
    if (ctx->pc == 0x20DFC4u) {
        ctx->pc = 0x20DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFC0u;
        // 0x20dfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFC8u;
        goto label_20dfc8;
    }
    ctx->pc = 0x20DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DFC8u);
        ctx->pc = 0x20DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFC0u;
        // 0x20dfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFC0u, 0x20DFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DFC8u;
label_20dfc8:
    // 0x20dfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20dfcc:
    // 0x20dfcc: 0xc083d0a  jal         func_20F428
label_20dfd0:
    if (ctx->pc == 0x20DFD0u) {
        ctx->pc = 0x20DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFCCu;
        // 0x20dfd0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFD4u;
        goto label_20dfd4;
    }
    ctx->pc = 0x20DFCCu;
    SET_GPR_U32(ctx, 31, 0x20DFD4u);
    ctx->pc = 0x20DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFCCu;
    // 0x20dfd0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F428u, 0x20DFCCu, 0x20DFD4u)) {
        return;
    }
    ctx->pc = 0x20DFD4u;
label_20dfd4:
    // 0x20dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dfd8:
    // 0x20dfd8: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_20dfdc:
    if (ctx->pc == 0x20DFDCu) {
        ctx->pc = 0x20DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFD8u;
        // 0x20dfdc: 0xdea30058  ld          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFE0u;
        goto label_20dfe0;
    }
    ctx->pc = 0x20DFD8u;
    {
        const bool branch_taken_0x20dfd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dfd8) {
            ctx->pc = 0x20DFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DFD8u;
            // 0x20dfdc: 0xdea30058  ld          $v1, 0x58($s5) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E00Cu;
            goto label_20e00c;
        }
    }
    ctx->pc = 0x20DFE0u;
label_20dfe0:
    // 0x20dfe0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dfe4:
    // 0x20dfe4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x20dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20dfe8:
    // 0x20dfe8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x20dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_20dfec:
    // 0x20dfec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20dff0:
    // 0x20dff0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dff4:
    // 0x20dff4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x20dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_20dff8:
    // 0x20dff8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20dffc:
    // 0x20dffc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e000:
    // 0x20e000: 0x40f809  jalr        $v0
label_20e004:
    if (ctx->pc == 0x20E004u) {
        ctx->pc = 0x20E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E000u;
        // 0x20e004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E008u;
        goto label_20e008;
    }
    ctx->pc = 0x20E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E008u);
        ctx->pc = 0x20E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E000u;
        // 0x20e004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E000u, 0x20E008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E008u;
label_20e008:
    // 0x20e008: 0xdea30058  ld          $v1, 0x58($s5)
    ctx->pc = 0x20e008u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
label_20e00c:
    // 0x20e00c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e010:
    // 0x20e010: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20e014:
    // 0x20e014: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20e014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20e018:
    // 0x20e018: 0x64630010  daddiu      $v1, $v1, 0x10
    ctx->pc = 0x20e018u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16);
label_20e01c:
    // 0x20e01c: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x20e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_20e020:
    // 0x20e020: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x20e020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_20e024:
    // 0x20e024: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e028:
    // 0x20e028: 0xfea30058  sd          $v1, 0x58($s5)
    ctx->pc = 0x20e028u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
label_20e02c:
    // 0x20e02c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x20e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20e030:
    // 0x20e030: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x20e030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e034:
    // 0x20e034: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e038:
    // 0x20e038: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x20e038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_20e03c:
    // 0x20e03c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20e040:
    // 0x20e040: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20e040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20e044:
    // 0x20e044: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_20e048:
    if (ctx->pc == 0x20E048u) {
        ctx->pc = 0x20E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E044u;
        // 0x20e048: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E04Cu;
        goto label_20e04c;
    }
    ctx->pc = 0x20E044u;
    {
        const bool branch_taken_0x20e044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E044u;
        // 0x20e048: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e044) {
            ctx->pc = 0x20E070u;
            goto label_20e070;
        }
    }
    ctx->pc = 0x20E04Cu;
label_20e04c:
    // 0x20e04c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20e050:
    // 0x20e050: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x20e050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20e054:
    // 0x20e054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20e058:
    // 0x20e058: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x20e058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_20e05c:
    // 0x20e05c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20e05cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20e060:
    // 0x20e060: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20e064:
    // 0x20e064: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20e068:
    // 0x20e068: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_20e06c:
    if (ctx->pc == 0x20E06Cu) {
        ctx->pc = 0x20E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E068u;
        // 0x20e06c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E070u;
        goto label_20e070;
    }
    ctx->pc = 0x20E068u;
    {
        const bool branch_taken_0x20e068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E068u;
        // 0x20e06c: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e068) {
            ctx->pc = 0x20E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e058;
        }
    }
    ctx->pc = 0x20E070u;
label_20e070:
    // 0x20e070: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x20e070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_20e074:
    // 0x20e074: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_20e078:
    if (ctx->pc == 0x20E078u) {
        ctx->pc = 0x20E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E074u;
        // 0x20e078: 0x2d32023  subu        $a0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E07Cu;
        goto label_20e07c;
    }
    ctx->pc = 0x20E074u;
    {
        const bool branch_taken_0x20e074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E074u;
        // 0x20e078: 0x2d32023  subu        $a0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e074) {
            ctx->pc = 0x20DF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20df40;
        }
    }
    ctx->pc = 0x20E07Cu;
label_20e07c:
    // 0x20e07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20e080:
    // 0x20e080: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20e080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20e084:
    // 0x20e084: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20e084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20e088:
    // 0x20e088: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20e088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20e08c:
    // 0x20e08c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20e08cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20e090:
    // 0x20e090: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20e090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20e094:
    // 0x20e094: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20e094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20e098:
    // 0x20e098: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20e098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20e09c:
    // 0x20e09c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20e09cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20e0a0:
    // 0x20e0a0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20e0a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e0a4:
    // 0x20e0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e0a8:
    // 0x20e0a8: 0x3e00008  jr          $ra
label_20e0ac:
    if (ctx->pc == 0x20E0ACu) {
        ctx->pc = 0x20E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0A8u;
        // 0x20e0ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E0B0u;
        goto label_fallthrough_0x20e0a8;
    }
    ctx->pc = 0x20E0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0A8u;
        // 0x20e0ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e0a8:
    ctx->pc = 0x20E0B0u;
}
