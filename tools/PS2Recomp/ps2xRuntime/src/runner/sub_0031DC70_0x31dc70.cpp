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

// Function: sub_0031DC70
// Address: 0x31dc70 - 0x31e1f0
void sub_0031DC70_0x31dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC70_0x31dc70");
#endif

    switch (ctx->pc) {
        case 0x31dcb4u: goto label_31dcb4;
        case 0x31dcc8u: goto label_31dcc8;
        case 0x31dd98u: goto label_31dd98;
        case 0x31dee0u: goto label_31dee0;
        case 0x31e020u: goto label_31e020;
        case 0x31e034u: goto label_31e034;
        case 0x31e048u: goto label_31e048;
        case 0x31e128u: goto label_31e128;
        case 0x31e134u: goto label_31e134;
        case 0x31e140u: goto label_31e140;
        case 0x31e18cu: goto label_31e18c;
        case 0x31e1b8u: goto label_31e1b8;
        default: break;
    }

    ctx->pc = 0x31dc70u;

    // 0x31dc70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31dc74: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31dc78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31dc7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31dc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc80: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x31dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x31dc84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31dc84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc88: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31dc8c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x31dc8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31dc94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31dc98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31dc9c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31dca0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31dca4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DCA4u;
    {
        const bool branch_taken_0x31dca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCA4u;
        // 0x31dca8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dca4) {
            ctx->pc = 0x31DCBCu;
            goto label_31dcbc;
        }
    }
    ctx->pc = 0x31DCACu;
    // 0x31dcac: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x31DCACu;
    SET_GPR_U32(ctx, 31, 0x31DCB4u);
    ctx->pc = 0x31DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCACu;
    // 0x31dcb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x31DCACu, 0x31DCB4u)) {
        return;
    }
    ctx->pc = 0x31DCB4u;
label_31dcb4:
    // 0x31dcb4: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x31DCB4u;
    {
        const bool branch_taken_0x31dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCB4u;
        // 0x31dcb8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcb4) {
            ctx->pc = 0x31E1C0u;
            goto label_31e1c0;
        }
    }
    ctx->pc = 0x31DCBCu;
label_31dcbc:
    // 0x31dcbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcc0: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x31DCC0u;
    SET_GPR_U32(ctx, 31, 0x31DCC8u);
    ctx->pc = 0x31DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCC0u;
    // 0x31dcc4: 0x2611fff8  addiu       $s1, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x31DCC0u, 0x31DCC8u)) {
        return;
    }
    ctx->pc = 0x31DCC8u;
label_31dcc8:
    // 0x31dcc8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x31dcc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dccc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31dcd0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31dcd4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31dcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31dcd8: 0x26450013  addiu       $a1, $s2, 0x13
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x31dcdc: 0x43b824  and         $s7, $v0, $v1
    ctx->pc = 0x31dcdcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31dce0: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x31dce0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x31dce4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DCE4u;
    {
        const bool branch_taken_0x31dce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCE4u;
        // 0x31dce8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dce4) {
            ctx->pc = 0x31DCFCu;
            goto label_31dcfc;
        }
    }
    ctx->pc = 0x31DCECu;
    // 0x31dcec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31dcf0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x31dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x31dcf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31DCF4u;
    {
        const bool branch_taken_0x31dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCF4u;
        // 0x31dcf8: 0xa2b024  and         $s6, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcf4) {
            ctx->pc = 0x31DD00u;
            goto label_31dd00;
        }
    }
    ctx->pc = 0x31DCFCu;
label_31dcfc:
    // 0x31dcfc: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x31dcfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31dd00:
    // 0x31dd00: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x31dd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x31dd04: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x31DD04u;
    {
        const bool branch_taken_0x31dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD04u;
        // 0x31dd08: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd04) {
            ctx->pc = 0x31E148u;
            goto label_31e148;
        }
    }
    ctx->pc = 0x31DD0Cu;
    // 0x31dd0c: 0x2b33021  addu        $a2, $s5, $s3
    ctx->pc = 0x31dd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x31dd10: 0x244570c8  addiu       $a1, $v0, 0x70C8
    ctx->pc = 0x31dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31dd14: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31dd18: 0x50c4000b  beql        $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x31DD18u;
    {
        const bool branch_taken_0x31dd18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x31dd18) {
            ctx->pc = 0x31DD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD18u;
            // 0x31dd1c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DD48u;
            goto label_31dd48;
        }
    }
    ctx->pc = 0x31DD20u;
    // 0x31dd20: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x31dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31dd24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31dd28: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x31dd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x31dd2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31dd30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31dd34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31dd38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31dd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31dd3c: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x31DD3Cu;
    {
        const bool branch_taken_0x31dd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dd3c) {
            ctx->pc = 0x31DD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD3Cu;
            // 0x31dd40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DD44u;
    // 0x31dd44: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x31dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_31dd48:
    // 0x31dd48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31dd4c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31dd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31dd50: 0x14c40013  bne         $a2, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31DD50u;
    {
        const bool branch_taken_0x31dd50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x31DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD50u;
        // 0x31dd54: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd50) {
            ctx->pc = 0x31DDA0u;
            goto label_31dda0;
        }
    }
    ctx->pc = 0x31DD58u;
    // 0x31dd58: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x31dd5c: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x31dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x31dd60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31dd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31dd64: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x31DD64u;
    {
        const bool branch_taken_0x31dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dd64) {
            ctx->pc = 0x31DD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DD64u;
            // 0x31dd68: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DDD0u;
            goto label_31ddd0;
        }
    }
    ctx->pc = 0x31DD6Cu;
    // 0x31dd6c: 0x761023  subu        $v0, $v1, $s6
    ctx->pc = 0x31dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x31dd70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd74: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x31dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x31dd78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31dd7c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31dd80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x31dd84: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x31dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x31dd88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31dd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31dd8c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x31dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x31dd90: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31DD90u;
    SET_GPR_U32(ctx, 31, 0x31DD98u);
    ctx->pc = 0x31DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD90u;
    // 0x31dd94: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31DD90u, 0x31DD98u)) {
        return;
    }
    ctx->pc = 0x31DD98u;
label_31dd98:
    // 0x31dd98: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x31DD98u;
    {
        const bool branch_taken_0x31dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD98u;
        // 0x31dd9c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd98) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31DDA0u;
label_31dda0:
    // 0x31dda0: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x31dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x31dda4: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x31dda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x31dda8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DDA8u;
    {
        const bool branch_taken_0x31dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dda8) {
            ctx->pc = 0x31DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DDA8u;
            // 0x31ddac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DDD0u;
            goto label_31ddd0;
        }
    }
    ctx->pc = 0x31DDB0u;
    // 0x31ddb0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x31ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31ddb4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x31ddb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ddb8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x31ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x31ddbc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x31ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31ddc0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x31DDC0u;
    {
        const bool branch_taken_0x31ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDC0u;
        // 0x31ddc4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddc0) {
            ctx->pc = 0x31E148u;
            goto label_31e148;
        }
    }
    ctx->pc = 0x31DDC8u;
label_31ddc8:
    // 0x31ddc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ddc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ddcc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_31ddd0:
    // 0x31ddd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31ddd4: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x31DDD4u;
    {
        const bool branch_taken_0x31ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDD4u;
        // 0x31ddd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddd4) {
            ctx->pc = 0x31E02Cu;
            goto label_31e02c;
        }
    }
    ctx->pc = 0x31DDDCu;
    // 0x31dddc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31dde0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31dde4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31dde8: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x31dde8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x31ddec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31ddf0: 0x10c00055  beqz        $a2, . + 4 + (0x55 << 2)
    ctx->pc = 0x31DDF0u;
    {
        const bool branch_taken_0x31ddf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DDF0u;
        // 0x31ddf4: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddf0) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DDF8u;
    // 0x31ddf8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31ddfc: 0x246270c8  addiu       $v0, $v1, 0x70C8
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28872));
    // 0x31de00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x31de00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6870D0u));
    // 0x31de04: 0x14c30043  bne         $a2, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x31DE04u;
    {
        const bool branch_taken_0x31de04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE04u;
        // 0x31de08: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de04) {
            ctx->pc = 0x31DF14u;
            goto label_31df14;
        }
    }
    ctx->pc = 0x31DE0Cu;
    // 0x31de0c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x31de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x31de10: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x31de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x31de14: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x31de14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x31de18: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x31de18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31de1c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x31DE1Cu;
    {
        const bool branch_taken_0x31de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE1Cu;
        // 0x31de20: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de1c) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DE24u;
    // 0x31de24: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x31de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x31de28: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x31de28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31de2c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x31de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31de30: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x31de30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31de34: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x31de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x31de38: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x31de38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x31de3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31DE3Cu;
    {
        const bool branch_taken_0x31de3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE3Cu;
        // 0x31de40: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de3c) {
            ctx->pc = 0x31DED4u;
            goto label_31ded4;
        }
    }
    ctx->pc = 0x31DE44u;
    // 0x31de44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x31de44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de48: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x31de48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x31de4c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31DE4Cu;
    {
        const bool branch_taken_0x31de4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE4Cu;
        // 0x31de50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de4c) {
            ctx->pc = 0x31DEB0u;
            goto label_31deb0;
        }
    }
    ctx->pc = 0x31DE54u;
    // 0x31de54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31de58: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x31de58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31de5c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x31de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31de60: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x31de60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x31de64: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x31de64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x31de68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31de6c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DE6Cu;
    {
        const bool branch_taken_0x31de6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE6Cu;
        // 0x31de70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de6c) {
            ctx->pc = 0x31DEB0u;
            goto label_31deb0;
        }
    }
    ctx->pc = 0x31DE74u;
    // 0x31de74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31de78: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x31de78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x31de7c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x31de7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31de80: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x31de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x31de84: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x31de84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x31de88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31de8c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31DE8Cu;
    {
        const bool branch_taken_0x31de8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE8Cu;
        // 0x31de90: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de8c) {
            ctx->pc = 0x31DEB0u;
            goto label_31deb0;
        }
    }
    ctx->pc = 0x31DE94u;
    // 0x31de94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31de94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31de98: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x31de98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x31de9c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x31de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31dea0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x31dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x31dea4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31dea8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x31dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x31deac: 0x0  nop
    ctx->pc = 0x31deacu;
    // NOP
label_31deb0:
    // 0x31deb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31deb4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31deb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31deb8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31debc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31debcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31dec0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31dec4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31dec8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31decc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31DECCu;
    {
        const bool branch_taken_0x31decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DECCu;
        // 0x31ded0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31decc) {
            ctx->pc = 0x31DEE0u;
            goto label_31dee0;
        }
    }
    ctx->pc = 0x31DED4u;
label_31ded4:
    // 0x31ded4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ded4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ded8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31DED8u;
    SET_GPR_U32(ctx, 31, 0x31DEE0u);
    ctx->pc = 0x31DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DED8u;
    // 0x31dedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31DED8u, 0x31DEE0u)) {
        return;
    }
    ctx->pc = 0x31DEE0u;
label_31dee0:
    // 0x31dee0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31dee4: 0x2962821  addu        $a1, $s4, $s6
    ctx->pc = 0x31dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x31dee8: 0x246270c8  addiu       $v0, $v1, 0x70C8
    ctx->pc = 0x31dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28872));
    // 0x31deec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31def0: 0x2f61823  subu        $v1, $s7, $s6
    ctx->pc = 0x31def0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x31def4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x31def4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31def8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x31def8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x31defc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x31defcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x31df00: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31df04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31df08: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x31df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x31df0c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x31DF0Cu;
    {
        const bool branch_taken_0x31df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF0Cu;
        // 0x31df10: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df0c) {
            ctx->pc = 0x31E138u;
            goto label_31e138;
        }
    }
    ctx->pc = 0x31DF14u;
label_31df14:
    // 0x31df14: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x31df14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31df18: 0xf6182b  sltu        $v1, $a3, $s6
    ctx->pc = 0x31df18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x31df1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31DF1Cu;
    {
        const bool branch_taken_0x31df1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF1Cu;
        // 0x31df20: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df1c) {
            ctx->pc = 0x31DF48u;
            goto label_31df48;
        }
    }
    ctx->pc = 0x31DF24u;
    // 0x31df24: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x31df24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31df28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x31df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x31df2c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x31df2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df30: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x31df30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x31df34: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x31df34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31df38: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x31df38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31df3c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x31df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x31df40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31DF40u;
    {
        const bool branch_taken_0x31df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF40u;
        // 0x31df44: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df40) {
            ctx->pc = 0x31DF70u;
            goto label_31df70;
        }
    }
    ctx->pc = 0x31DF48u;
label_31df48:
    // 0x31df48: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x31DF48u;
    {
        const bool branch_taken_0x31df48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF48u;
        // 0x31df4c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df48) {
            ctx->pc = 0x31E028u;
            goto label_31e028;
        }
    }
    ctx->pc = 0x31DF50u;
    // 0x31df50: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x31df50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x31df54: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31DF54u;
    {
        const bool branch_taken_0x31df54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF54u;
        // 0x31df58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df54) {
            ctx->pc = 0x31E02Cu;
            goto label_31e02c;
        }
    }
    ctx->pc = 0x31DF5Cu;
    // 0x31df5c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x31df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x31df60: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x31df60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df64: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x31df64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31df68: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x31df68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31df6c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x31df6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_31df70:
    // 0x31df70: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x31df70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31df74: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x31df74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31df78: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x31df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x31df7c: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x31df7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x31df80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31DF80u;
    {
        const bool branch_taken_0x31df80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF80u;
        // 0x31df84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df80) {
            ctx->pc = 0x31E014u;
            goto label_31e014;
        }
    }
    ctx->pc = 0x31DF88u;
    // 0x31df88: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x31df88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x31df8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31DF8Cu;
    {
        const bool branch_taken_0x31df8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DF8Cu;
        // 0x31df90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31df8c) {
            ctx->pc = 0x31DFF0u;
            goto label_31dff0;
        }
    }
    ctx->pc = 0x31DF94u;
    // 0x31df94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31df98: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x31df98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31df9c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x31df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31dfa0: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x31dfa0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x31dfa4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x31dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x31dfa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31dfac: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31DFACu;
    {
        const bool branch_taken_0x31dfac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFACu;
        // 0x31dfb0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfac) {
            ctx->pc = 0x31DFF0u;
            goto label_31dff0;
        }
    }
    ctx->pc = 0x31DFB4u;
    // 0x31dfb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31dfb8: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x31dfb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x31dfbc: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31dfc0: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x31dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x31dfc4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x31dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x31dfc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31dfcc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31DFCCu;
    {
        const bool branch_taken_0x31dfcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFCCu;
        // 0x31dfd0: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dfcc) {
            ctx->pc = 0x31DFF0u;
            goto label_31dff0;
        }
    }
    ctx->pc = 0x31DFD4u;
    // 0x31dfd4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31dfd8: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x31dfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x31dfdc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x31dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31dfe0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x31dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x31dfe4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31dfe8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x31dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x31dfec: 0x0  nop
    ctx->pc = 0x31dfecu;
    // NOP
label_31dff0:
    // 0x31dff0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31dff4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31dff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31dff8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31dffc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31e000: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31e004: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31e004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31e008: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x31e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31e00c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x31E00Cu;
    {
        const bool branch_taken_0x31e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E00Cu;
        // 0x31e010: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e00c) {
            ctx->pc = 0x31E148u;
            goto label_31e148;
        }
    }
    ctx->pc = 0x31E014u;
label_31e014:
    // 0x31e014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e018: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31E018u;
    SET_GPR_U32(ctx, 31, 0x31E020u);
    ctx->pc = 0x31E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E018u;
    // 0x31e01c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31E018u, 0x31E020u)) {
        return;
    }
    ctx->pc = 0x31E020u;
label_31e020:
    // 0x31e020: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x31E020u;
    {
        const bool branch_taken_0x31e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E020u;
        // 0x31e024: 0x2f62023  subu        $a0, $s7, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e020) {
            ctx->pc = 0x31E14Cu;
            goto label_31e14c;
        }
    }
    ctx->pc = 0x31E028u;
label_31e028:
    // 0x31e028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e02c:
    // 0x31e02c: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x31E02Cu;
    SET_GPR_U32(ctx, 31, 0x31E034u);
    ctx->pc = 0x31E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E02Cu;
    // 0x31e030: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x31E02Cu, 0x31E034u)) {
        return;
    }
    ctx->pc = 0x31E034u;
label_31e034:
    // 0x31e034: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31e034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e038: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E038u;
    {
        const bool branch_taken_0x31e038 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e038) {
            ctx->pc = 0x31E03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E038u;
            // 0x31e03c: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E050u;
            goto label_31e050;
        }
    }
    ctx->pc = 0x31E040u;
    // 0x31e040: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31E040u;
    SET_GPR_U32(ctx, 31, 0x31E048u);
    ctx->pc = 0x31E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E040u;
    // 0x31e044: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31E040u, 0x31E048u)) {
        return;
    }
    ctx->pc = 0x31E048u;
label_31e048:
    // 0x31e048: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x31E048u;
    {
        const bool branch_taken_0x31e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E048u;
        // 0x31e04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e048) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31E050u;
label_31e050:
    // 0x31e050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e054: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x31e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x31e058: 0x2651fff8  addiu       $s1, $s2, -0x8
    ctx->pc = 0x31e058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x31e05c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31e05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e060: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x31e064: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E064u;
    {
        const bool branch_taken_0x31e064 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x31E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E064u;
        // 0x31e068: 0x2666fffc  addiu       $a2, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e064) {
            ctx->pc = 0x31E088u;
            goto label_31e088;
        }
    }
    ctx->pc = 0x31E06Cu;
    // 0x31e06c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31e070: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e074: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31e074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31e078: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x31e078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e07c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31e07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e080: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31E080u;
    {
        const bool branch_taken_0x31e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E080u;
        // 0x31e084: 0x263b821  addu        $s7, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e080) {
            ctx->pc = 0x31E148u;
            goto label_31e148;
        }
    }
    ctx->pc = 0x31E088u;
label_31e088:
    // 0x31e088: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x31e088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x31e08c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x31E08Cu;
    {
        const bool branch_taken_0x31e08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E08Cu;
        // 0x31e090: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e08c) {
            ctx->pc = 0x31E11Cu;
            goto label_31e11c;
        }
    }
    ctx->pc = 0x31E094u;
    // 0x31e094: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x31e094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x31e098: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31E098u;
    {
        const bool branch_taken_0x31e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E098u;
        // 0x31e09c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e098) {
            ctx->pc = 0x31E0F8u;
            goto label_31e0f8;
        }
    }
    ctx->pc = 0x31E0A0u;
    // 0x31e0a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31e0a4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x31e0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31e0a8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x31e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x31e0ac: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x31e0acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x31e0b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x31e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x31e0b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31e0b8: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x31E0B8u;
    {
        const bool branch_taken_0x31e0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0B8u;
        // 0x31e0bc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0b8) {
            ctx->pc = 0x31E0F8u;
            goto label_31e0f8;
        }
    }
    ctx->pc = 0x31E0C0u;
    // 0x31e0c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31e0c4: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x31e0c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x31e0c8: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31e0cc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x31e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31e0d0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x31e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x31e0d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31e0d8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E0D8u;
    {
        const bool branch_taken_0x31e0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0D8u;
        // 0x31e0dc: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0d8) {
            ctx->pc = 0x31E0F8u;
            goto label_31e0f8;
        }
    }
    ctx->pc = 0x31E0E0u;
    // 0x31e0e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31e0e4: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x31e0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x31e0e8: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x31e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x31e0ec: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x31e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x31e0f0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x31e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31e0f4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x31e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_31e0f8:
    // 0x31e0f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31e0fc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31e0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31e100: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31e100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31e104: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31e104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31e108: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x31e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31e10c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x31e110: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x31e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31e114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E114u;
    {
        const bool branch_taken_0x31e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E114u;
        // 0x31e118: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e114) {
            ctx->pc = 0x31E128u;
            goto label_31e128;
        }
    }
    ctx->pc = 0x31E11Cu;
label_31e11c:
    // 0x31e11c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31e11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e120: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x31E120u;
    SET_GPR_U32(ctx, 31, 0x31E128u);
    ctx->pc = 0x31E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E120u;
    // 0x31e124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x31E120u, 0x31E128u)) {
        return;
    }
    ctx->pc = 0x31E128u;
label_31e128:
    // 0x31e128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e12c: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31E12Cu;
    SET_GPR_U32(ctx, 31, 0x31E134u);
    ctx->pc = 0x31E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E12Cu;
    // 0x31e130: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31E12Cu, 0x31E134u)) {
        return;
    }
    ctx->pc = 0x31E134u;
label_31e134:
    // 0x31e134: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31e138:
    // 0x31e138: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31E138u;
    SET_GPR_U32(ctx, 31, 0x31E140u);
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31E138u, 0x31E140u)) {
        return;
    }
    ctx->pc = 0x31E140u;
label_31e140:
    // 0x31e140: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31E140u;
    {
        const bool branch_taken_0x31e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E140u;
        // 0x31e144: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e140) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31E148u;
label_31e148:
    // 0x31e148: 0x2f62023  subu        $a0, $s7, $s6
    ctx->pc = 0x31e148u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_31e14c:
    // 0x31e14c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x31e14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31e150: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31E150u;
    {
        const bool branch_taken_0x31e150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E150u;
        // 0x31e154: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e150) {
            ctx->pc = 0x31E194u;
            goto label_31e194;
        }
    }
    ctx->pc = 0x31E158u;
    // 0x31e158: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x31e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x31e15c: 0x34870001  ori         $a3, $a0, 0x1
    ctx->pc = 0x31e15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x31e160: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x31e160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31e168: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x31e168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31e16c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x31e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x31e170: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e174: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x31e174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x31e178: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x31e178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x31e17c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x31e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31e180: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31e180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31e184: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31E184u;
    SET_GPR_U32(ctx, 31, 0x31E18Cu);
    ctx->pc = 0x31E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E184u;
    // 0x31e188: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31E184u, 0x31E18Cu)) {
        return;
    }
    ctx->pc = 0x31E18Cu;
label_31e18c:
    // 0x31e18c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E18Cu;
    {
        const bool branch_taken_0x31e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e18c) {
            ctx->pc = 0x31E1B0u;
            goto label_31e1b0;
        }
    }
    ctx->pc = 0x31E194u;
label_31e194:
    // 0x31e194: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x31e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x31e198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31e19c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x31e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x31e1a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x31e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x31e1a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e1a8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x31e1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x31e1ac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_31e1b0:
    // 0x31e1b0: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31E1B0u;
    SET_GPR_U32(ctx, 31, 0x31E1B8u);
    ctx->pc = 0x31E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1B0u;
    // 0x31e1b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31E1B0u, 0x31E1B8u)) {
        return;
    }
    ctx->pc = 0x31E1B8u;
label_31e1b8:
    // 0x31e1b8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x31e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_31e1bc:
    // 0x31e1bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31e1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31e1c0:
    // 0x31e1c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31e1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e1c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31e1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e1c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31e1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e1cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e1d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31e1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e1d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31e1d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e1d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31e1d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e1dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x31e1dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E4u;
        // 0x31e1e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E1ECu;
    // 0x31e1ec: 0x0  nop
    ctx->pc = 0x31e1ecu;
    // NOP
    ctx->pc = 0x31e1f0u;
}
