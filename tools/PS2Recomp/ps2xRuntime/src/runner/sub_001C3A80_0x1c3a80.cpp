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

// Function: sub_001C3A80
// Address: 0x1c3a80 - 0x1c3ba8
void sub_001C3A80_0x1c3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3A80_0x1c3a80");
#endif

    switch (ctx->pc) {
        case 0x1c3aa0u: goto label_1c3aa0;
        case 0x1c3ad8u: goto label_1c3ad8;
        case 0x1c3af0u: goto label_1c3af0;
        case 0x1c3b04u: goto label_1c3b04;
        case 0x1c3b1cu: goto label_1c3b1c;
        case 0x1c3b34u: goto label_1c3b34;
        case 0x1c3b48u: goto label_1c3b48;
        case 0x1c3b60u: goto label_1c3b60;
        case 0x1c3b74u: goto label_1c3b74;
        case 0x1c3b88u: goto label_1c3b88;
        default: break;
    }

    ctx->pc = 0x1c3a80u;

    // 0x1c3a80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1c3a84: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c3a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1c3a88: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1c3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1c3a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a90: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c3a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1c3a94: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1c3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1c3a98: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C3A98u;
    SET_GPR_U32(ctx, 31, 0x1C3AA0u);
    ctx->pc = 0x1C3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A98u;
    // 0x1c3a9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C3A98u, 0x1C3AA0u)) {
        return;
    }
    ctx->pc = 0x1C3AA0u;
label_1c3aa0:
    // 0x1c3aa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c3aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3aa8: 0x2463e2c8  addiu       $v1, $v1, -0x1D38
    ctx->pc = 0x1c3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959816));
    // 0x1c3aac: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1c3ab0: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c3ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1c3ab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ab8: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c3abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ac0: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1c3ac4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c3ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3ac8: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1c3ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1c3acc: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1c3accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1c3ad0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3AD0u;
    SET_GPR_U32(ctx, 31, 0x1C3AD8u);
    ctx->pc = 0x1C3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AD0u;
    // 0x1c3ad4: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3AD0u, 0x1C3AD8u)) {
        return;
    }
    ctx->pc = 0x1C3AD8u;
label_1c3ad8:
    // 0x1c3ad8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ae0: 0x24a5e280  addiu       $a1, $a1, -0x1D80
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
    // 0x1c3ae4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c3ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ae8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C3AE8u;
    SET_GPR_U32(ctx, 31, 0x1C3AF0u);
    ctx->pc = 0x1C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AE8u;
    // 0x1c3aec: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C3AE8u, 0x1C3AF0u)) {
        return;
    }
    ctx->pc = 0x1C3AF0u;
label_1c3af0:
    // 0x1c3af0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c3af0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3af4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3AF4u;
    {
        const bool branch_taken_0x1c3af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AF4u;
        // 0x1c3af8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3af4) {
            ctx->pc = 0x1C3B08u;
            goto label_1c3b08;
        }
    }
    ctx->pc = 0x1C3AFCu;
    // 0x1c3afc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C3AFCu;
    SET_GPR_U32(ctx, 31, 0x1C3B04u);
    ctx->pc = 0x1C3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AFCu;
    // 0x1c3b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C3AFCu, 0x1C3B04u)) {
        return;
    }
    ctx->pc = 0x1C3B04u;
label_1c3b04:
    // 0x1c3b04: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1c3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_1c3b08:
    // 0x1c3b08: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c3b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b14: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3B14u;
    SET_GPR_U32(ctx, 31, 0x1C3B1Cu);
    ctx->pc = 0x1C3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B14u;
    // 0x1c3b18: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3B14u, 0x1C3B1Cu)) {
        return;
    }
    ctx->pc = 0x1C3B1Cu;
label_1c3b1c:
    // 0x1c3b1c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b24: 0x24a5e288  addiu       $a1, $a1, -0x1D78
    ctx->pc = 0x1c3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959752));
    // 0x1c3b28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c3b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b2c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C3B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B34u);
    ctx->pc = 0x1C3B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B2Cu;
    // 0x1c3b30: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C3B2Cu, 0x1C3B34u)) {
        return;
    }
    ctx->pc = 0x1C3B34u;
label_1c3b34:
    // 0x1c3b34: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3b38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B38u;
    {
        const bool branch_taken_0x1c3b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B38u;
        // 0x1c3b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b38) {
            ctx->pc = 0x1C3B4Cu;
            goto label_1c3b4c;
        }
    }
    ctx->pc = 0x1C3B40u;
    // 0x1c3b40: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C3B40u;
    SET_GPR_U32(ctx, 31, 0x1C3B48u);
    ctx->pc = 0x1C3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B40u;
    // 0x1c3b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C3B40u, 0x1C3B48u)) {
        return;
    }
    ctx->pc = 0x1C3B48u;
label_1c3b48:
    // 0x1c3b48: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1c3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1c3b4c:
    // 0x1c3b4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b54: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
    // 0x1c3b58: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C3B58u;
    SET_GPR_U32(ctx, 31, 0x1C3B60u);
    ctx->pc = 0x1C3B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B58u;
    // 0x1c3b5c: 0x2606026c  addiu       $a2, $s0, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C3B58u, 0x1C3B60u)) {
        return;
    }
    ctx->pc = 0x1C3B60u;
label_1c3b60:
    // 0x1c3b60: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b68: 0x24a5e2a0  addiu       $a1, $a1, -0x1D60
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959776));
    // 0x1c3b6c: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C3B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B74u);
    ctx->pc = 0x1C3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B6Cu;
    // 0x1c3b70: 0x26060270  addiu       $a2, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C3B6Cu, 0x1C3B74u)) {
        return;
    }
    ctx->pc = 0x1C3B74u;
label_1c3b74:
    // 0x1c3b74: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b7c: 0x26060274  addiu       $a2, $s0, 0x274
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1c3b80: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1C3B80u;
    SET_GPR_U32(ctx, 31, 0x1C3B88u);
    ctx->pc = 0x1C3B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B80u;
    // 0x1c3b84: 0x24a5e2b0  addiu       $a1, $a1, -0x1D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1C3B80u, 0x1C3B88u)) {
        return;
    }
    ctx->pc = 0x1C3B88u;
label_1c3b88:
    // 0x1c3b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c3b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b8c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c3b90: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c3b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c3b94: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1c3b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c3b98: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1c3b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c3b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B9Cu;
        // 0x1c3ba0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3BA4u;
    // 0x1c3ba4: 0x0  nop
    ctx->pc = 0x1c3ba4u;
    // NOP
    ctx->pc = 0x1c3ba8u;
}
