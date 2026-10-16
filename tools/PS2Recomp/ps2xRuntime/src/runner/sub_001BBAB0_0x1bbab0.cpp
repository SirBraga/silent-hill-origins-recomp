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

// Function: sub_001BBAB0
// Address: 0x1bbab0 - 0x1bbc00
void sub_001BBAB0_0x1bbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAB0_0x1bbab0");
#endif

    switch (ctx->pc) {
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbbecu: goto label_1bbbec;
        default: break;
    }

    ctx->pc = 0x1bbab0u;

    // 0x1bbab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bbab8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bbabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbac8: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x1bbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1bbacc: 0x0  nop
    ctx->pc = 0x1bbaccu;
    // NOP
label_1bbad0:
    // 0x1bbad0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bbad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bbad8: 0x0  nop
    ctx->pc = 0x1bbad8u;
    // NOP
    // 0x1bbadc: 0x0  nop
    ctx->pc = 0x1bbadcu;
    // NOP
    // 0x1bbae0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BBAE0u;
    {
        const bool branch_taken_0x1bbae0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1BBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAE0u;
        // 0x1bbae4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbae0) {
            ctx->pc = 0x1BBAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbad0;
        }
    }
    ctx->pc = 0x1BBAE8u;
    // 0x1bbae8: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1bbaec: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1BBAECu;
    {
        const bool branch_taken_0x1bbaec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1BBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAECu;
        // 0x1bbaf0: 0xae000304  sw          $zero, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbaec) {
            ctx->pc = 0x1BBBDCu;
            goto label_1bbbdc;
        }
    }
    ctx->pc = 0x1BBAF4u;
    // 0x1bbaf4: 0x8e050398  lw          $a1, 0x398($s0)
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    // 0x1bbaf8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBAF8u;
    {
        const bool branch_taken_0x1bbaf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF8u;
        // 0x1bbafc: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbaf8) {
            ctx->pc = 0x1BBB14u;
            goto label_1bbb14;
        }
    }
    ctx->pc = 0x1BBB00u;
    // 0x1bbb00: 0xc0640ce  jal         func_190338
    ctx->pc = 0x1BBB00u;
    SET_GPR_U32(ctx, 31, 0x1BBB08u);
    ctx->pc = 0x1BBB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB00u;
    // 0x1bbb04: 0x8e248b2c  lw          $a0, -0x74D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x1BBB00u, 0x1BBB08u)) {
        return;
    }
    ctx->pc = 0x1BBB08u;
label_1bbb08:
    // 0x1bbb08: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BBB08u;
    SET_GPR_U32(ctx, 31, 0x1BBB10u);
    ctx->pc = 0x1BBB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB08u;
    // 0x1bbb0c: 0x8e040398  lw          $a0, 0x398($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BBB08u, 0x1BBB10u)) {
        return;
    }
    ctx->pc = 0x1BBB10u;
label_1bbb10:
    // 0x1bbb10: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x1bbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
label_1bbb14:
    // 0x1bbb14: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1bbb18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bbb1c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBB1Cu;
    {
        const bool branch_taken_0x1bbb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB1Cu;
        // 0x1bbb20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb1c) {
            ctx->pc = 0x1BBB40u;
            goto label_1bbb40;
        }
    }
    ctx->pc = 0x1BBB24u;
    // 0x1bbb24: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1bbb28:
    // 0x1bbb28: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBB28u;
    {
        const bool branch_taken_0x1bbb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbb28) {
            ctx->pc = 0x1BBB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBB28u;
            // 0x1bbb2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB48u;
            goto label_1bbb48;
        }
    }
    ctx->pc = 0x1BBB30u;
    // 0x1bbb30: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbb34: 0x0  nop
    ctx->pc = 0x1bbb34u;
    // NOP
    // 0x1bbb38: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BBB38u;
    {
        const bool branch_taken_0x1bbb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB38u;
        // 0x1bbb3c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb38) {
            ctx->pc = 0x1BBB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbb28;
        }
    }
    ctx->pc = 0x1BBB40u;
label_1bbb40:
    // 0x1bbb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x0u));
label_1bbb48:
    // 0x1bbb48: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1BBB48u;
    SET_GPR_U32(ctx, 31, 0x1BBB50u);
    ctx->pc = 0x1BBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB48u;
    // 0x1bbb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1BBB48u, 0x1BBB50u)) {
        return;
    }
    ctx->pc = 0x1BBB50u;
label_1bbb50:
    // 0x1bbb50: 0xae020398  sw          $v0, 0x398($s0)
    ctx->pc = 0x1bbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 2));
    // 0x1bbb54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bbb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb58: 0xc06354e  jal         func_18D538
    ctx->pc = 0x1BBB58u;
    SET_GPR_U32(ctx, 31, 0x1BBB60u);
    ctx->pc = 0x1BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB58u;
    // 0x1bbb5c: 0x8e248b2c  lw          $a0, -0x74D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x1BBB58u, 0x1BBB60u)) {
        return;
    }
    ctx->pc = 0x1BBB60u;
label_1bbb60:
    // 0x1bbb60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb68: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1BBB68u;
    SET_GPR_U32(ctx, 31, 0x1BBB70u);
    ctx->pc = 0x1BBB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB68u;
    // 0x1bbb6c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BBB68u, 0x1BBB70u)) {
        return;
    }
    ctx->pc = 0x1BBB70u;
label_1bbb70:
    // 0x1bbb70: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1bbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
    // 0x1bbb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb78: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1BBB78u;
    SET_GPR_U32(ctx, 31, 0x1BBB80u);
    ctx->pc = 0x1BBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB78u;
    // 0x1bbb7c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BBB78u, 0x1BBB80u)) {
        return;
    }
    ctx->pc = 0x1BBB80u;
label_1bbb80:
    // 0x1bbb80: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x1bbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x1bbb84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb88: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1bbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1bbb8c: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x1bbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x1bbb90: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1bbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x1bbb94: 0xae0302f4  sw          $v1, 0x2F4($s0)
    ctx->pc = 0x1bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 3));
    // 0x1bbb98: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bbb9c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1bbba0: 0xae0202f8  sw          $v0, 0x2F8($s0)
    ctx->pc = 0x1bbba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    // 0x1bbba4: 0x8c6284d8  lw          $v0, -0x7B28($v1)
    ctx->pc = 0x1bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384D8u));
    // 0x1bbba8: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBBA8u;
    {
        const bool branch_taken_0x1bbba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bbba8) {
            ctx->pc = 0x1BBBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBBA8u;
            // 0x1bbbac: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBC4u;
            goto label_1bbbc4;
        }
    }
    ctx->pc = 0x1BBBB0u;
    // 0x1bbbb0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1bbbb4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bbbb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBBB8u;
    {
        const bool branch_taken_0x1bbbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBB8u;
        // 0x1bbbbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbb8) {
            ctx->pc = 0x1BBBC4u;
            goto label_1bbbc4;
        }
    }
    ctx->pc = 0x1BBBC0u;
    // 0x1bbbc0: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_1bbbc4:
    // 0x1bbbc4: 0xae0402fc  sw          $a0, 0x2FC($s0)
    ctx->pc = 0x1bbbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 4));
    // 0x1bbbc8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1bbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1bbbcc: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x1bbbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    // 0x1bbbd0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1bbbd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBBD4u;
    {
        const bool branch_taken_0x1bbbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBD4u;
        // 0x1bbbd8: 0xae030304  sw          $v1, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbd4) {
            ctx->pc = 0x1BBBE4u;
            goto label_1bbbe4;
        }
    }
    ctx->pc = 0x1BBBDCu;
label_1bbbdc:
    // 0x1bbbdc: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1bbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x1bbbe0: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x1bbbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
label_1bbbe4:
    // 0x1bbbe4: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BBBE4u;
    SET_GPR_U32(ctx, 31, 0x1BBBECu);
    ctx->pc = 0x1BBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBE4u;
    // 0x1bbbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE4B0u, 0x1BBBE4u, 0x1BBBECu)) {
        return;
    }
    ctx->pc = 0x1BBBECu;
label_1bbbec:
    // 0x1bbbec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bbbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbbf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBF8u;
        // 0x1bbbfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC00u;
}
