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

// Function: sub_00272AF0
// Address: 0x272af0 - 0x272ca8
void sub_00272AF0_0x272af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272AF0_0x272af0");
#endif

    switch (ctx->pc) {
        case 0x272b50u: goto label_272b50;
        case 0x272b94u: goto label_272b94;
        case 0x272bb8u: goto label_272bb8;
        case 0x272c28u: goto label_272c28;
        case 0x272c48u: goto label_272c48;
        case 0x272c90u: goto label_272c90;
        default: break;
    }

    ctx->pc = 0x272af0u;

    // 0x272af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x272af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x272af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x272afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x272b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x272b04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x272b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b08: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x272b08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x272b0c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x272b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272b10: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x272b10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x272b14: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x272b14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x272b18: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x272b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x272b1c: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x272b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x272b20: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x272B20u;
    {
        const bool branch_taken_0x272b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B20u;
        // 0x272b24: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b20) {
            ctx->pc = 0x272B84u;
            goto label_272b84;
        }
    }
    ctx->pc = 0x272B28u;
    // 0x272b28: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x272b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x272b2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272b30: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272b34: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x272b38: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x272B38u;
    {
        const bool branch_taken_0x272b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B38u;
        // 0x272b3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b38) {
            ctx->pc = 0x272C90u;
            goto label_272c90;
        }
    }
    ctx->pc = 0x272B40u;
    // 0x272b40: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x272b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x272b44: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x272b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x272b48: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x272B48u;
    SET_GPR_U32(ctx, 31, 0x272B50u);
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x272B48u, 0x272B50u)) {
        return;
    }
    ctx->pc = 0x272B50u;
label_272b50:
    // 0x272b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b54: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x272b54u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x272b58: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x272b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x272b5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272b60: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x272b60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x272b64: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x272b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x272b68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x272b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x272b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B6Cu;
    {
        const bool branch_taken_0x272b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B6Cu;
        // 0x272b70: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b6c) {
            ctx->pc = 0x272B80u;
            goto label_272b80;
        }
    }
    ctx->pc = 0x272B74u;
    // 0x272b74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x272b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x272b78: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x272B78u;
    {
        const bool branch_taken_0x272b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B78u;
        // 0x272b7c: 0xdc45cb90  ld          $a1, -0x3470($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b78) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272B80u;
label_272b80:
    // 0x272b80: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x272b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_272b84:
    // 0x272b84: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272B84u;
    {
        const bool branch_taken_0x272b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B84u;
        // 0x272b88: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b84) {
            ctx->pc = 0x272B9Cu;
            goto label_272b9c;
        }
    }
    ctx->pc = 0x272B8Cu;
    // 0x272b8c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x272B8Cu;
    SET_GPR_U32(ctx, 31, 0x272B94u);
    ctx->pc = 0x272B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B8Cu;
    // 0x272b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x272B8Cu, 0x272B94u)) {
        return;
    }
    ctx->pc = 0x272B94u;
label_272b94:
    // 0x272b94: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x272B94u;
    {
        const bool branch_taken_0x272b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B94u;
        // 0x272b98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b94) {
            ctx->pc = 0x272C94u;
            goto label_272c94;
        }
    }
    ctx->pc = 0x272B9Cu;
label_272b9c:
    // 0x272b9c: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x272b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x272ba0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x272BA0u;
    {
        const bool branch_taken_0x272ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BA0u;
        // 0x272ba4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ba0) {
            ctx->pc = 0x272BC4u;
            goto label_272bc4;
        }
    }
    ctx->pc = 0x272BA8u;
    // 0x272ba8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x272ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bac: 0xdc50cb98  ld          $s0, -0x3468($v0)
    ctx->pc = 0x272bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294953880)));
    // 0x272bb0: 0xc09cb96  jal         func_272E58
    ctx->pc = 0x272BB0u;
    SET_GPR_U32(ctx, 31, 0x272BB8u);
    ctx->pc = 0x272BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BB0u;
    // 0x272bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272E58u, 0x272BB0u, 0x272BB8u)) {
        return;
    }
    ctx->pc = 0x272BB8u;
label_272bb8:
    // 0x272bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bbc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x272BBCu;
    {
        const bool branch_taken_0x272bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BBCu;
        // 0x272bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bbc) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272BC4u;
label_272bc4:
    // 0x272bc4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x272BC4u;
    {
        const bool branch_taken_0x272bc4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x272BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BC4u;
        // 0x272bc8: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bc4) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x272BCCu;
    // 0x272bcc: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x272bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x272bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272bd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x272bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272bdc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x272bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x272be0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x272be4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x272be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x272be8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x272be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x272bec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272bf0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x272bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272bf4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x272BF4u;
    {
        const bool branch_taken_0x272bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BF4u;
        // 0x272bf8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bf4) {
            ctx->pc = 0x272C90u;
            goto label_272c90;
        }
    }
    ctx->pc = 0x272BFCu;
    // 0x272bfc: 0x0  nop
    ctx->pc = 0x272bfcu;
    // NOP
label_272c00:
    // 0x272c00: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x272c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x272c04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x272C04u;
    {
        const bool branch_taken_0x272c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C04u;
        // 0x272c08: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c04) {
            ctx->pc = 0x272C54u;
            goto label_272c54;
        }
    }
    ctx->pc = 0x272C0Cu;
    // 0x272c0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x272c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x272c10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x272C10u;
    {
        const bool branch_taken_0x272c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C10u;
        // 0x272c14: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c10) {
            ctx->pc = 0x272C34u;
            goto label_272c34;
        }
    }
    ctx->pc = 0x272C18u;
    // 0x272c18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x272c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c1c: 0xdc50cb98  ld          $s0, -0x3468($v0)
    ctx->pc = 0x272c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294953880)));
    // 0x272c20: 0xc09cb96  jal         func_272E58
    ctx->pc = 0x272C20u;
    SET_GPR_U32(ctx, 31, 0x272C28u);
    ctx->pc = 0x272C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C20u;
    // 0x272c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272E58u, 0x272C20u, 0x272C28u)) {
        return;
    }
    ctx->pc = 0x272C28u;
label_272c28:
    // 0x272c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272C2Cu;
    {
        const bool branch_taken_0x272c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C2Cu;
        // 0x272c30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c2c) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C34u;
label_272c34:
    // 0x272c34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x272c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x272c38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c3c: 0xdc50cb90  ld          $s0, -0x3470($v0)
    ctx->pc = 0x272c3cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6ACB90u));
    // 0x272c40: 0xc09cb96  jal         func_272E58
    ctx->pc = 0x272C40u;
    SET_GPR_U32(ctx, 31, 0x272C48u);
    ctx->pc = 0x272C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C40u;
    // 0x272c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272E58u, 0x272C40u, 0x272C48u)) {
        return;
    }
    ctx->pc = 0x272C48u;
label_272c48:
    // 0x272c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x272C4Cu;
    {
        const bool branch_taken_0x272c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C4Cu;
        // 0x272c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c4c) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C54u;
label_272c54:
    // 0x272c54: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x272c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x272c58: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x272c5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272c60: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x272c64: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272c68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x272c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x272c6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x272c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x272c70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x272c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x272c74: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x272c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x272c78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272c7c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x272c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x272c80: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x272c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x272c84: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x272c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_272c88:
    // 0x272c88: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x272C88u;
    SET_GPR_U32(ctx, 31, 0x272C90u);
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x272C88u, 0x272C90u)) {
        return;
    }
    ctx->pc = 0x272C90u;
label_272c90:
    // 0x272c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_272c94:
    // 0x272c94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x272c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x272c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x272C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C9Cu;
        // 0x272ca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272CA4u;
    // 0x272ca4: 0x0  nop
    ctx->pc = 0x272ca4u;
    // NOP
    ctx->pc = 0x272ca8u;
}
