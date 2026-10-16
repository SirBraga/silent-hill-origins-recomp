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

// Function: sub_0017DEC0
// Address: 0x17dec0 - 0x17e088
void sub_0017DEC0_0x17dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DEC0_0x17dec0");
#endif

    switch (ctx->pc) {
        case 0x17dee0u: goto label_17dee0;
        case 0x17def8u: goto label_17def8;
        case 0x17df7cu: goto label_17df7c;
        case 0x17df9cu: goto label_17df9c;
        case 0x17dfb4u: goto label_17dfb4;
        case 0x17dfd4u: goto label_17dfd4;
        case 0x17dfecu: goto label_17dfec;
        case 0x17e00cu: goto label_17e00c;
        case 0x17e024u: goto label_17e024;
        case 0x17e044u: goto label_17e044;
        case 0x17e064u: goto label_17e064;
        default: break;
    }

    ctx->pc = 0x17dec0u;

    // 0x17dec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17dec4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17dec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17decc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ded0: 0x8c46f988  lw          $a2, -0x678($v0)
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF988u));
    // 0x17ded4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ded8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17DED8u;
    SET_GPR_U32(ctx, 31, 0x17DEE0u);
    ctx->pc = 0x17DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED8u;
    // 0x17dedc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17DED8u, 0x17DEE0u)) {
        return;
    }
    ctx->pc = 0x17DEE0u;
label_17dee0:
    // 0x17dee0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17dee8: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x17DEE8u;
    {
        const bool branch_taken_0x17dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dee8) {
            ctx->pc = 0x17DEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DEE8u;
            // 0x17deec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E078u;
            goto label_17e078;
        }
    }
    ctx->pc = 0x17DEF0u;
    // 0x17def0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17def4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17def8:
    // 0x17def8: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x17def8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17defc: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x17DEFCu;
    {
        const bool branch_taken_0x17defc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEFCu;
        // 0x17df00: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17defc) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF04u;
    // 0x17df04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17df08: 0x24427880  addiu       $v0, $v0, 0x7880
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30848));
    // 0x17df0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17df10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17df14: 0x800008  jr          $a0
    ctx->pc = 0x17DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DF1Cu: goto label_17df1c;
            case 0x17DF2Cu: goto label_17df2c;
            case 0x17DF3Cu: goto label_17df3c;
            case 0x17DF5Cu: goto label_17df5c;
            case 0x17DF6Cu: goto label_17df6c;
            case 0x17DFA4u: goto label_17dfa4;
            case 0x17DFDCu: goto label_17dfdc;
            case 0x17E014u: goto label_17e014;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17DF1Cu;
label_17df1c:
    // 0x17df1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df20: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17df24: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x17DF24u;
    {
        const bool branch_taken_0x17df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF24u;
        // 0x17df28: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df24) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF2Cu;
label_17df2c:
    // 0x17df2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17df34: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x17DF34u;
    {
        const bool branch_taken_0x17df34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF34u;
        // 0x17df38: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df34) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF3Cu;
label_17df3c:
    // 0x17df3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17df44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DF44u;
    {
        const bool branch_taken_0x17df44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF44u;
        // 0x17df48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df44) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DF4Cu;
    // 0x17df4c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x17DF4Cu;
    {
        const bool branch_taken_0x17df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF4Cu;
        // 0x17df50: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df4c) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF54u;
label_17df54:
    // 0x17df54: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17DF54u;
    {
        const bool branch_taken_0x17df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF54u;
        // 0x17df58: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df54) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF5Cu;
label_17df5c:
    // 0x17df5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17df64: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17DF64u;
    {
        const bool branch_taken_0x17df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF64u;
        // 0x17df68: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df64) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF6Cu;
label_17df6c:
    // 0x17df6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17df70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df74: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17DF74u;
    SET_GPR_U32(ctx, 31, 0x17DF7Cu);
    ctx->pc = 0x17DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF74u;
    // 0x17df78: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17DF74u, 0x17DF7Cu)) {
        return;
    }
    ctx->pc = 0x17DF7Cu;
label_17df7c:
    // 0x17df7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17df7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df80: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17DF80u;
    {
        const bool branch_taken_0x17df80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF80u;
        // 0x17df84: 0xae040044  sw          $a0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df80) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DF88u;
    // 0x17df88: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17df88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17df8c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17DF8Cu;
    {
        const bool branch_taken_0x17df8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF8Cu;
        // 0x17df90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df8c) {
            ctx->pc = 0x17E04Cu;
            goto label_17e04c;
        }
    }
    ctx->pc = 0x17DF94u;
    // 0x17df94: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17DF94u;
    SET_GPR_U32(ctx, 31, 0x17DF9Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17DF94u, 0x17DF9Cu)) {
        return;
    }
    ctx->pc = 0x17DF9Cu;
label_17df9c:
    // 0x17df9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17DF9Cu;
    {
        const bool branch_taken_0x17df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF9Cu;
        // 0x17dfa0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df9c) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DFA4u;
label_17dfa4:
    // 0x17dfa4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dfa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfac: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17DFACu;
    SET_GPR_U32(ctx, 31, 0x17DFB4u);
    ctx->pc = 0x17DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFACu;
    // 0x17dfb0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17DFACu, 0x17DFB4u)) {
        return;
    }
    ctx->pc = 0x17DFB4u;
label_17dfb4:
    // 0x17dfb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb8: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17DFB8u;
    {
        const bool branch_taken_0x17dfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFB8u;
        // 0x17dfbc: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfb8) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DFC0u;
    // 0x17dfc0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17dfc4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17DFC4u;
    {
        const bool branch_taken_0x17dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFC4u;
        // 0x17dfc8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfc4) {
            ctx->pc = 0x17E04Cu;
            goto label_17e04c;
        }
    }
    ctx->pc = 0x17DFCCu;
    // 0x17dfcc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17DFCCu;
    SET_GPR_U32(ctx, 31, 0x17DFD4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17DFCCu, 0x17DFD4u)) {
        return;
    }
    ctx->pc = 0x17DFD4u;
label_17dfd4:
    // 0x17dfd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17DFD4u;
    {
        const bool branch_taken_0x17dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFD4u;
        // 0x17dfd8: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfd4) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DFDCu;
label_17dfdc:
    // 0x17dfdc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17DFE4u;
    SET_GPR_U32(ctx, 31, 0x17DFECu);
    ctx->pc = 0x17DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFE4u;
    // 0x17dfe8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17DFE4u, 0x17DFECu)) {
        return;
    }
    ctx->pc = 0x17DFECu;
label_17dfec:
    // 0x17dfec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dff0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17DFF0u;
    {
        const bool branch_taken_0x17dff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF0u;
        // 0x17dff4: 0xae04004c  sw          $a0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dff0) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17DFF8u;
    // 0x17dff8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17dff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17dffc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17DFFCu;
    {
        const bool branch_taken_0x17dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFFCu;
        // 0x17e000: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dffc) {
            ctx->pc = 0x17E04Cu;
            goto label_17e04c;
        }
    }
    ctx->pc = 0x17E004u;
    // 0x17e004: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E004u;
    SET_GPR_U32(ctx, 31, 0x17E00Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E004u, 0x17E00Cu)) {
        return;
    }
    ctx->pc = 0x17E00Cu;
label_17e00c:
    // 0x17e00c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17E00Cu;
    {
        const bool branch_taken_0x17e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E00Cu;
        // 0x17e010: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e00c) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17E014u;
label_17e014:
    // 0x17e014: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e01c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17E01Cu;
    SET_GPR_U32(ctx, 31, 0x17E024u);
    ctx->pc = 0x17E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E01Cu;
    // 0x17e020: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17E01Cu, 0x17E024u)) {
        return;
    }
    ctx->pc = 0x17E024u;
label_17e024:
    // 0x17e024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e028: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E028u;
    {
        const bool branch_taken_0x17e028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E028u;
        // 0x17e02c: 0xae040050  sw          $a0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e028) {
            ctx->pc = 0x17E048u;
            goto label_17e048;
        }
    }
    ctx->pc = 0x17E030u;
    // 0x17e030: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e034: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E034u;
    {
        const bool branch_taken_0x17e034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E034u;
        // 0x17e038: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e034) {
            ctx->pc = 0x17E04Cu;
            goto label_17e04c;
        }
    }
    ctx->pc = 0x17E03Cu;
    // 0x17e03c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17E03Cu;
    SET_GPR_U32(ctx, 31, 0x17E044u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17E03Cu, 0x17E044u)) {
        return;
    }
    ctx->pc = 0x17E044u;
label_17e044:
    // 0x17e044: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17e044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_17e048:
    // 0x17e048: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17e04c:
    // 0x17e04c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e054: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e05c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17E05Cu;
    SET_GPR_U32(ctx, 31, 0x17E064u);
    ctx->pc = 0x17E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E05Cu;
    // 0x17e060: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17E05Cu, 0x17E064u)) {
        return;
    }
    ctx->pc = 0x17E064u;
label_17e064:
    // 0x17e064: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e06c: 0x5460ffa2  bnel        $v1, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x17E06Cu;
    {
        const bool branch_taken_0x17e06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e06c) {
            ctx->pc = 0x17E070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E06Cu;
            // 0x17e070: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17def8;
        }
    }
    ctx->pc = 0x17E074u;
    // 0x17e074: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17e074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e078:
    // 0x17e078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E07Cu;
        // 0x17e080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E084u;
    // 0x17e084: 0x0  nop
    ctx->pc = 0x17e084u;
    // NOP
    ctx->pc = 0x17e088u;
}
