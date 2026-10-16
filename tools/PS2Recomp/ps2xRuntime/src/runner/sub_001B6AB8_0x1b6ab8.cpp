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

// Function: sub_001B6AB8
// Address: 0x1b6ab8 - 0x1b6bd0
void sub_001B6AB8_0x1b6ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6AB8_0x1b6ab8");
#endif

    switch (ctx->pc) {
        case 0x1b6b00u: goto label_1b6b00;
        case 0x1b6b04u: goto label_1b6b04;
        case 0x1b6b10u: goto label_1b6b10;
        case 0x1b6b24u: goto label_1b6b24;
        case 0x1b6b30u: goto label_1b6b30;
        case 0x1b6b44u: goto label_1b6b44;
        case 0x1b6b54u: goto label_1b6b54;
        default: break;
    }

    ctx->pc = 0x1b6ab8u;

    // 0x1b6ab8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b6ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1b6abc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1b6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1b6ac0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1b6ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1b6ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ac8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1b6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1b6acc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b6accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1b6ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1b6ad4: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1b6ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
    // 0x1b6ad8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1b6ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1b6adc: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1b6ae0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1b6ae4: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1b6ae8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1b6ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1b6aec: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1b6aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1b6af0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1b6af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1b6af4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b6af8: 0x8e430260  lw          $v1, 0x260($s2)
    ctx->pc = 0x1b6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1b6afc: 0x247e0005  addiu       $fp, $v1, 0x5
    ctx->pc = 0x1b6afcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1b6b00:
    // 0x1b6b00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b6b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b04:
    // 0x1b6b04: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1b6b04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1b6b08: 0x26319290  addiu       $s1, $s1, -0x6D70
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939280));
    // 0x1b6b0c: 0x0  nop
    ctx->pc = 0x1b6b0cu;
    // NOP
label_1b6b10:
    // 0x1b6b10: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1b6b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b18: 0x8e470260  lw          $a3, 0x260($s2)
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1b6b1c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1B6B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B24u);
    ctx->pc = 0x1B6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B1Cu;
    // 0x1b6b20: 0x26e5ca00  addiu       $a1, $s7, -0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B6B1Cu, 0x1B6B24u)) {
        return;
    }
    ctx->pc = 0x1B6B24u;
label_1b6b24:
    // 0x1b6b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b28: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1B6B28u;
    SET_GPR_U32(ctx, 31, 0x1B6B30u);
    ctx->pc = 0x1B6B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B28u;
    // 0x1b6b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B6B28u, 0x1B6B30u)) {
        return;
    }
    ctx->pc = 0x1B6B30u;
label_1b6b30:
    // 0x1b6b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6B34u;
    {
        const bool branch_taken_0x1b6b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B34u;
        // 0x1b6b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b34) {
            ctx->pc = 0x1B6B70u;
            goto label_1b6b70;
        }
    }
    ctx->pc = 0x1B6B3Cu;
    // 0x1b6b3c: 0xc0c5daa  jal         func_3176A8
    ctx->pc = 0x1B6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B44u);
    ctx->pc = 0x1B6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B3Cu;
    // 0x1b6b40: 0x26c5ca08  addiu       $a1, $s6, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3176A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3176A8u, 0x1B6B3Cu, 0x1B6B44u)) {
        return;
    }
    ctx->pc = 0x1B6B44u;
label_1b6b44:
    // 0x1b6b44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6B44u;
    {
        const bool branch_taken_0x1b6b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B44u;
        // 0x1b6b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b44) {
            ctx->pc = 0x1B6B70u;
            goto label_1b6b70;
        }
    }
    ctx->pc = 0x1B6B4Cu;
    // 0x1b6b4c: 0xc0c5daa  jal         func_3176A8
    ctx->pc = 0x1B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B54u);
    ctx->pc = 0x1B6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B4Cu;
    // 0x1b6b50: 0x26a5ca20  addiu       $a1, $s5, -0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3176A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3176A8u, 0x1B6B4Cu, 0x1B6B54u)) {
        return;
    }
    ctx->pc = 0x1B6B54u;
label_1b6b54:
    // 0x1b6b54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6B54u;
    {
        const bool branch_taken_0x1b6b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B54u;
        // 0x1b6b58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b54) {
            ctx->pc = 0x1B6B70u;
            goto label_1b6b70;
        }
    }
    ctx->pc = 0x1B6B5Cu;
    // 0x1b6b5c: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x1b6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x1b6b60: 0x8e430260  lw          $v1, 0x260($s2)
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1b6b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6b68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6B68u;
    {
        const bool branch_taken_0x1b6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B68u;
        // 0x1b6b6c: 0xae430260  sw          $v1, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b68) {
            ctx->pc = 0x1B6BA0u;
            goto label_1b6ba0;
        }
    }
    ctx->pc = 0x1B6B70u;
label_1b6b70:
    // 0x1b6b70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b6b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b6b74: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1b6b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6b78: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B6B78u;
    {
        const bool branch_taken_0x1b6b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B78u;
        // 0x1b6b7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b78) {
            ctx->pc = 0x1B6B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6b10;
        }
    }
    ctx->pc = 0x1B6B80u;
    // 0x1b6b80: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1b6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1b6b84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b6b88: 0x1200ffdd  beqz        $s0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1B6B88u;
    {
        const bool branch_taken_0x1b6b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B88u;
        // 0x1b6b8c: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b88) {
            ctx->pc = 0x1B6B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6b00;
        }
    }
    ctx->pc = 0x1B6B90u;
    // 0x1b6b90: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x1b6b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b6b94: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B6B94u;
    {
        const bool branch_taken_0x1b6b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B94u;
        // 0x1b6b98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b94) {
            ctx->pc = 0x1B6B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6b04;
        }
    }
    ctx->pc = 0x1B6B9Cu;
    // 0x1b6b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ba0:
    // 0x1b6ba0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1b6ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b6ba4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b6ba8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1b6ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b6bac: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1b6bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b6bb0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1b6bb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b6bb4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1b6bb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b6bb8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1b6bb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b6bbc: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1b6bbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b6bc0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b6bc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b6bc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b6bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC8u;
        // 0x1b6bcc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6BD0u;
}
