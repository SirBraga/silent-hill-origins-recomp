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

// Function: sub_0014A9F0
// Address: 0x14a9f0 - 0x14ac38
void sub_0014A9F0_0x14a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A9F0_0x14a9f0");
#endif

    switch (ctx->pc) {
        case 0x14aa24u: goto label_14aa24;
        case 0x14aa34u: goto label_14aa34;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa5cu: goto label_14aa5c;
        case 0x14aa78u: goto label_14aa78;
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa98u: goto label_14aa98;
        case 0x14aac0u: goto label_14aac0;
        case 0x14aac8u: goto label_14aac8;
        case 0x14aae8u: goto label_14aae8;
        case 0x14aaf4u: goto label_14aaf4;
        case 0x14ab04u: goto label_14ab04;
        case 0x14ab14u: goto label_14ab14;
        case 0x14ab1cu: goto label_14ab1c;
        case 0x14ab24u: goto label_14ab24;
        case 0x14ab2cu: goto label_14ab2c;
        case 0x14ab34u: goto label_14ab34;
        case 0x14ab44u: goto label_14ab44;
        case 0x14ab54u: goto label_14ab54;
        case 0x14ab5cu: goto label_14ab5c;
        case 0x14ab90u: goto label_14ab90;
        case 0x14abc8u: goto label_14abc8;
        case 0x14abfcu: goto label_14abfc;
        case 0x14ac10u: goto label_14ac10;
        case 0x14ac18u: goto label_14ac18;
        default: break;
    }

    ctx->pc = 0x14a9f0u;

    // 0x14a9f0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x14a9f4: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x14a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
    // 0x14a9f8: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x14a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x14a9fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14a9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa00: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x14aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x14aa04: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x14aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
    // 0x14aa08: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x14aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x14aa0c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x14aa10: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x14AA10u;
    {
        const bool branch_taken_0x14aa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA10u;
        // 0x14aa14: 0x27b30400  addiu       $s3, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa10) {
            ctx->pc = 0x14AC18u;
            goto label_14ac18;
        }
    }
    ctx->pc = 0x14AA18u;
    // 0x14aa18: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x14aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x14aa1c: 0xc04e448  jal         func_139120
    ctx->pc = 0x14AA1Cu;
    SET_GPR_U32(ctx, 31, 0x14AA24u);
    ctx->pc = 0x14AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA1Cu;
    // 0x14aa20: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x14AA1Cu, 0x14AA24u)) {
        return;
    }
    ctx->pc = 0x14AA24u;
label_14aa24:
    // 0x14aa24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa28: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14aa2c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x14AA2Cu;
    SET_GPR_U32(ctx, 31, 0x14AA34u);
    ctx->pc = 0x14AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA2Cu;
    // 0x14aa30: 0x24501b98  addiu       $s0, $v0, 0x1B98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x14AA2Cu, 0x14AA34u)) {
        return;
    }
    ctx->pc = 0x14AA34u;
label_14aa34:
    // 0x14aa34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AA34u;
    {
        const bool branch_taken_0x14aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA34u;
        // 0x14aa38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa34) {
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14AA3Cu;
    // 0x14aa3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa40: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x14AA40u;
    SET_GPR_U32(ctx, 31, 0x14AA48u);
    ctx->pc = 0x14AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA40u;
    // 0x14aa44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x14AA40u, 0x14AA48u)) {
        return;
    }
    ctx->pc = 0x14AA48u;
label_14aa48:
    // 0x14aa48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14AA50u;
    // 0x14aa50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa54: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x14AA54u;
    SET_GPR_U32(ctx, 31, 0x14AA5Cu);
    ctx->pc = 0x14AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA54u;
    // 0x14aa58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x14AA54u, 0x14AA5Cu)) {
        return;
    }
    ctx->pc = 0x14AA5Cu;
label_14aa5c:
    // 0x14aa5c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x14aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x14aa60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14AA60u;
    {
        const bool branch_taken_0x14aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA60u;
        // 0x14aa64: 0x8fa40400  lw          $a0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa60) {
            ctx->pc = 0x14AAB4u;
            goto label_14aab4;
        }
    }
    ctx->pc = 0x14AA68u;
    // 0x14aa68: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14aa6c: 0x26500054  addiu       $s0, $s2, 0x54
    ctx->pc = 0x14aa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x14aa70: 0xc04e442  jal         func_139108
    ctx->pc = 0x14AA70u;
    SET_GPR_U32(ctx, 31, 0x14AA78u);
    ctx->pc = 0x14AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA70u;
    // 0x14aa74: 0x8c5184e0  lw          $s1, -0x7B20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139108u, 0x14AA70u, 0x14AA78u)) {
        return;
    }
    ctx->pc = 0x14AA78u;
label_14aa78:
    // 0x14aa78: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AA78u;
    {
        const bool branch_taken_0x14aa78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA78u;
        // 0x14aa7c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa78) {
            ctx->pc = 0x14AA90u;
            goto label_14aa90;
        }
    }
    ctx->pc = 0x14AA80u;
    // 0x14aa80: 0xc04e43a  jal         func_1390E8
    ctx->pc = 0x14AA80u;
    SET_GPR_U32(ctx, 31, 0x14AA88u);
    ctx->pc = 0x14AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA80u;
    // 0x14aa84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1390E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1390E8u, 0x14AA80u, 0x14AA88u)) {
        return;
    }
    ctx->pc = 0x14AA88u;
label_14aa88:
    // 0x14aa88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14AA88u;
    {
        const bool branch_taken_0x14aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA88u;
        // 0x14aa8c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa88) {
            ctx->pc = 0x14AA9Cu;
            goto label_14aa9c;
        }
    }
    ctx->pc = 0x14AA90u;
label_14aa90:
    // 0x14aa90: 0xc04e470  jal         func_1391C0
    ctx->pc = 0x14AA90u;
    SET_GPR_U32(ctx, 31, 0x14AA98u);
    ctx->pc = 0x1391C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1391C0u, 0x14AA90u, 0x14AA98u)) {
        return;
    }
    ctx->pc = 0x14AA98u;
label_14aa98:
    // 0x14aa98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_14aa9c:
    // 0x14aa9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14aaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa4: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
    // 0x14aaa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14aaa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AAACu;
    {
        const bool branch_taken_0x14aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAACu;
        // 0x14aab0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaac) {
            ctx->pc = 0x14AAE0u;
            goto label_14aae0;
        }
    }
    ctx->pc = 0x14AAB4u;
label_14aab4:
    // 0x14aab4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14aab8: 0xc04e442  jal         func_139108
    ctx->pc = 0x14AAB8u;
    SET_GPR_U32(ctx, 31, 0x14AAC0u);
    ctx->pc = 0x14AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAB8u;
    // 0x14aabc: 0x8c5084e0  lw          $s0, -0x7B20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139108u, 0x14AAB8u, 0x14AAC0u)) {
        return;
    }
    ctx->pc = 0x14AAC0u;
label_14aac0:
    // 0x14aac0: 0xc04e470  jal         func_1391C0
    ctx->pc = 0x14AAC0u;
    SET_GPR_U32(ctx, 31, 0x14AAC8u);
    ctx->pc = 0x14AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAC0u;
    // 0x14aac4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1391C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1391C0u, 0x14AAC0u, 0x14AAC8u)) {
        return;
    }
    ctx->pc = 0x14AAC8u;
label_14aac8:
    // 0x14aac8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x14aacc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14aaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad4: 0x24a51b68  addiu       $a1, $a1, 0x1B68
    ctx->pc = 0x14aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7016));
    // 0x14aad8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14aad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aadc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14aadcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14aae0:
    // 0x14aae0: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x14AAE0u;
    SET_GPR_U32(ctx, 31, 0x14AAE8u);
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x14AAE0u, 0x14AAE8u)) {
        return;
    }
    ctx->pc = 0x14AAE8u;
label_14aae8:
    // 0x14aae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaec: 0xc081b56  jal         func_206D58
    ctx->pc = 0x14AAECu;
    SET_GPR_U32(ctx, 31, 0x14AAF4u);
    ctx->pc = 0x14AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAECu;
    // 0x14aaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x14AAECu, 0x14AAF4u)) {
        return;
    }
    ctx->pc = 0x14AAF4u;
label_14aaf4:
    // 0x14aaf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14aaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaf8: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x14aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x14aafc: 0xc065c58  jal         func_197160
    ctx->pc = 0x14AAFCu;
    SET_GPR_U32(ctx, 31, 0x14AB04u);
    ctx->pc = 0x14AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAFCu;
    // 0x14ab00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x14AAFCu, 0x14AB04u)) {
        return;
    }
    ctx->pc = 0x14AB04u;
label_14ab04:
    // 0x14ab04: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14AB04u;
    {
        const bool branch_taken_0x14ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ab04) {
            ctx->pc = 0x14AB4Cu;
            goto label_14ab4c;
        }
    }
    ctx->pc = 0x14AB0Cu;
    // 0x14ab0c: 0xc07f846  jal         func_1FE118
    ctx->pc = 0x14AB0Cu;
    SET_GPR_U32(ctx, 31, 0x14AB14u);
    ctx->pc = 0x14AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB0Cu;
    // 0x14ab10: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE118u, 0x14AB0Cu, 0x14AB14u)) {
        return;
    }
    ctx->pc = 0x14AB14u;
label_14ab14:
    // 0x14ab14: 0xc081042  jal         func_204108
    ctx->pc = 0x14AB14u;
    SET_GPR_U32(ctx, 31, 0x14AB1Cu);
    ctx->pc = 0x14AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB14u;
    // 0x14ab18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204108u, 0x14AB14u, 0x14AB1Cu)) {
        return;
    }
    ctx->pc = 0x14AB1Cu;
label_14ab1c:
    // 0x14ab1c: 0xc07f438  jal         func_1FD0E0
    ctx->pc = 0x14AB1Cu;
    SET_GPR_U32(ctx, 31, 0x14AB24u);
    ctx->pc = 0x14AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB1Cu;
    // 0x14ab20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD0E0u, 0x14AB1Cu, 0x14AB24u)) {
        return;
    }
    ctx->pc = 0x14AB24u;
label_14ab24:
    // 0x14ab24: 0xc0804a8  jal         func_2012A0
    ctx->pc = 0x14AB24u;
    SET_GPR_U32(ctx, 31, 0x14AB2Cu);
    ctx->pc = 0x2012A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2012A0u, 0x14AB24u, 0x14AB2Cu)) {
        return;
    }
    ctx->pc = 0x14AB2Cu;
label_14ab2c:
    // 0x14ab2c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14AB2Cu;
    SET_GPR_U32(ctx, 31, 0x14AB34u);
    ctx->pc = 0x14AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB2Cu;
    // 0x14ab30: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14AB2Cu, 0x14AB34u)) {
        return;
    }
    ctx->pc = 0x14AB34u;
label_14ab34:
    // 0x14ab34: 0xae500048  sw          $s0, 0x48($s2)
    ctx->pc = 0x14ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 16));
    // 0x14ab38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab3c: 0xc07f822  jal         func_1FE088
    ctx->pc = 0x14AB3Cu;
    SET_GPR_U32(ctx, 31, 0x14AB44u);
    ctx->pc = 0x14AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB3Cu;
    // 0x14ab40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE088u, 0x14AB3Cu, 0x14AB44u)) {
        return;
    }
    ctx->pc = 0x14AB44u;
label_14ab44:
    // 0x14ab44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB44u;
    {
        const bool branch_taken_0x14ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab44) {
            ctx->pc = 0x14AB54u;
            goto label_14ab54;
        }
    }
    ctx->pc = 0x14AB4Cu;
label_14ab4c:
    // 0x14ab4c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14AB4Cu;
    SET_GPR_U32(ctx, 31, 0x14AB54u);
    ctx->pc = 0x14AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB4Cu;
    // 0x14ab50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14AB4Cu, 0x14AB54u)) {
        return;
    }
    ctx->pc = 0x14AB54u;
label_14ab54:
    // 0x14ab54: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14AB54u;
    SET_GPR_U32(ctx, 31, 0x14AB5Cu);
    ctx->pc = 0x14AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB54u;
    // 0x14ab58: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14AB54u, 0x14AB5Cu)) {
        return;
    }
    ctx->pc = 0x14AB5Cu;
label_14ab5c:
    // 0x14ab5c: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x14ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x14ab60: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x14ab64: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x14ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x14ab68: 0xac7284dc  sw          $s2, -0x7B24($v1)
    ctx->pc = 0x14ab68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3384DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3384DCu, _value); } while (0);
    // 0x14ab6c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x14ab70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AB70u;
    {
        const bool branch_taken_0x14ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB70u;
        // 0x14ab74: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab70) {
            ctx->pc = 0x14AB84u;
            goto label_14ab84;
        }
    }
    ctx->pc = 0x14AB78u;
    // 0x14ab78: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x14ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14ab7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14AB7Cu;
    {
        const bool branch_taken_0x14ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB7Cu;
        // 0x14ab80: 0xac4384d8  sw          $v1, -0x7B28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab7c) {
            ctx->pc = 0x14AB90u;
            goto label_14ab90;
        }
    }
    ctx->pc = 0x14AB84u;
label_14ab84:
    // 0x14ab84: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x14ab88: 0xc04e44e  jal         func_139138
    ctx->pc = 0x14AB88u;
    SET_GPR_U32(ctx, 31, 0x14AB90u);
    ctx->pc = 0x14AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB88u;
    // 0x14ab8c: 0x248484d8  addiu       $a0, $a0, -0x7B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139138u, 0x14AB88u, 0x14AB90u)) {
        return;
    }
    ctx->pc = 0x14AB90u;
label_14ab90:
    // 0x14ab90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ab94: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14ab98: 0x8c45eed8  lw          $a1, -0x1128($v0)
    ctx->pc = 0x14ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BEED8u));
    // 0x14ab9c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14ab9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aba0: 0x26420044  addiu       $v0, $s2, 0x44
    ctx->pc = 0x14aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x14aba4: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x14aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14aba8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x14aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14abac: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ABACu;
    {
        const bool branch_taken_0x14abac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x14ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABACu;
        // 0x14abb0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abac) {
            ctx->pc = 0x14ABC8u;
            goto label_14abc8;
        }
    }
    ctx->pc = 0x14ABB4u;
    // 0x14abb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14abb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABB8u;
    {
        const bool branch_taken_0x14abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABB8u;
        // 0x14abbc: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abb8) {
            ctx->pc = 0x14ABCCu;
            goto label_14abcc;
        }
    }
    ctx->pc = 0x14ABC0u;
    // 0x14abc0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14ABC0u;
    SET_GPR_U32(ctx, 31, 0x14ABC8u);
    ctx->pc = 0x14ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABC0u;
    // 0x14abc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14ABC0u, 0x14ABC8u)) {
        return;
    }
    ctx->pc = 0x14ABC8u;
label_14abc8:
    // 0x14abc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14abcc:
    // 0x14abcc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14abd0: 0x8c64eea8  lw          $a0, -0x1158($v1)
    ctx->pc = 0x14abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962856)));
    // 0x14abd4: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x14abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x14abd8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14ABD8u;
    {
        const bool branch_taken_0x14abd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABD8u;
        // 0x14abdc: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abd8) {
            ctx->pc = 0x14ABFCu;
            goto label_14abfc;
        }
    }
    ctx->pc = 0x14ABE0u;
    // 0x14abe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14abe4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ABE4u;
    {
        const bool branch_taken_0x14abe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14abe4) {
            ctx->pc = 0x14ABE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ABE4u;
            // 0x14abe8: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AC00u;
            goto label_14ac00;
        }
    }
    ctx->pc = 0x14ABECu;
    // 0x14abec: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14abecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14abf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14abf4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14ABF4u;
    SET_GPR_U32(ctx, 31, 0x14ABFCu);
    ctx->pc = 0x14ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABF4u;
    // 0x14abf8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14ABF4u, 0x14ABFCu)) {
        return;
    }
    ctx->pc = 0x14ABFCu;
label_14abfc:
    // 0x14abfc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_14ac00:
    // 0x14ac00: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x14ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x14ac04: 0x26440038  addiu       $a0, $s2, 0x38
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x14ac08: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x14AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC08u;
    // 0x14ac0c: 0x24a58900  addiu       $a1, $a1, -0x7700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14AC08u, 0x14AC10u)) {
        return;
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0xc07c30a  jal         func_1F0C28
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x1F0C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0C28u, 0x14AC10u, 0x14AC18u)) {
        return;
    }
    ctx->pc = 0x14AC18u;
label_14ac18:
    // 0x14ac18: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x14ac18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x14ac1c: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x14ac1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x14ac20: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x14ac20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x14ac24: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x14ac24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x14ac28: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x14ac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x14ac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC2Cu;
        // 0x14ac30: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC34u;
    // 0x14ac34: 0x0  nop
    ctx->pc = 0x14ac34u;
    // NOP
    ctx->pc = 0x14ac38u;
}
