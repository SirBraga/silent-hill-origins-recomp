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

// Function: sub_001C8AF8
// Address: 0x1c8af8 - 0x1c8c20
void sub_001C8AF8_0x1c8af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8AF8_0x1c8af8");
#endif

    switch (ctx->pc) {
        case 0x1c8b0cu: goto label_1c8b0c;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b28u: goto label_1c8b28;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b98u: goto label_1c8b98;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8bb8u: goto label_1c8bb8;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8bd8u: goto label_1c8bd8;
        case 0x1c8be8u: goto label_1c8be8;
        case 0x1c8bf8u: goto label_1c8bf8;
        case 0x1c8c04u: goto label_1c8c04;
        case 0x1c8c10u: goto label_1c8c10;
        default: break;
    }

    ctx->pc = 0x1c8af8u;

    // 0x1c8af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8b04: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C8B04u;
    SET_GPR_U32(ctx, 31, 0x1C8B0Cu);
    ctx->pc = 0x1C8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B04u;
    // 0x1c8b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C8B04u, 0x1C8B0Cu)) {
        return;
    }
    ctx->pc = 0x1C8B0Cu;
label_1c8b0c:
    // 0x1c8b0c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c8b10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8B10u;
    {
        const bool branch_taken_0x1c8b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B10u;
        // 0x1c8b14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b10) {
            ctx->pc = 0x1C8B28u;
            goto label_1c8b28;
        }
    }
    ctx->pc = 0x1C8B18u;
    // 0x1c8b18: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1C8B18u, 0x1C8B20u)) {
        return;
    }
    ctx->pc = 0x1C8B20u;
label_1c8b20:
    // 0x1c8b20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c8b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c8b24: 0x0  nop
    ctx->pc = 0x1c8b24u;
    // NOP
label_1c8b28:
    // 0x1c8b28: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c8b30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c8b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8b38: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c8b38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c8b3c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8B3Cu;
    {
        const bool branch_taken_0x1c8b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B3Cu;
        // 0x1c8b40: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b3c) {
            ctx->pc = 0x1C8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8b28;
        }
    }
    ctx->pc = 0x1C8B44u;
    // 0x1c8b44: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b48: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1c8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1c8b4c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b50: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1c8b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1c8b54: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b58: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x1c8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x1c8b5c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b60: 0xac6001f8  sw          $zero, 0x1F8($v1)
    ctx->pc = 0x1c8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 504), GPR_U32(ctx, 0));
    // 0x1c8b64: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b68: 0xac4001fc  sw          $zero, 0x1FC($v0)
    ctx->pc = 0x1c8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 508), GPR_U32(ctx, 0));
    // 0x1c8b6c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b70: 0xac6001d8  sw          $zero, 0x1D8($v1)
    ctx->pc = 0x1c8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 472), GPR_U32(ctx, 0));
    // 0x1c8b74: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b78: 0xac4001dc  sw          $zero, 0x1DC($v0)
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 0));
    // 0x1c8b7c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b80: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8B80u;
    SET_GPR_U32(ctx, 31, 0x1C8B88u);
    ctx->pc = 0x1C8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B80u;
    // 0x1c8b84: 0x8e050280  lw          $a1, 0x280($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8B80u, 0x1C8B88u)) {
        return;
    }
    ctx->pc = 0x1C8B88u;
label_1c8b88:
    // 0x1c8b88: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b8c: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1c8b90: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8B90u;
    SET_GPR_U32(ctx, 31, 0x1C8B98u);
    ctx->pc = 0x1C8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B90u;
    // 0x1c8b94: 0xae020290  sw          $v0, 0x290($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8B90u, 0x1C8B98u)) {
        return;
    }
    ctx->pc = 0x1C8B98u;
label_1c8b98:
    // 0x1c8b98: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8b9c: 0x8e050288  lw          $a1, 0x288($s0)
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x1c8ba0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BA0u;
    SET_GPR_U32(ctx, 31, 0x1C8BA8u);
    ctx->pc = 0x1C8BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BA0u;
    // 0x1c8ba4: 0xae020294  sw          $v0, 0x294($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BA0u, 0x1C8BA8u)) {
        return;
    }
    ctx->pc = 0x1C8BA8u;
label_1c8ba8:
    // 0x1c8ba8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8bac: 0x8e05028c  lw          $a1, 0x28C($s0)
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c8bb0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BB0u;
    SET_GPR_U32(ctx, 31, 0x1C8BB8u);
    ctx->pc = 0x1C8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BB0u;
    // 0x1c8bb4: 0xae020298  sw          $v0, 0x298($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BB0u, 0x1C8BB8u)) {
        return;
    }
    ctx->pc = 0x1C8BB8u;
label_1c8bb8:
    // 0x1c8bb8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8bbc: 0x8e0503e0  lw          $a1, 0x3E0($s0)
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 992)));
    // 0x1c8bc0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BC0u;
    SET_GPR_U32(ctx, 31, 0x1C8BC8u);
    ctx->pc = 0x1C8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BC0u;
    // 0x1c8bc4: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BC0u, 0x1C8BC8u)) {
        return;
    }
    ctx->pc = 0x1C8BC8u;
label_1c8bc8:
    // 0x1c8bc8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8bcc: 0x8e0503e4  lw          $a1, 0x3E4($s0)
    ctx->pc = 0x1c8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c8bd0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BD0u;
    SET_GPR_U32(ctx, 31, 0x1C8BD8u);
    ctx->pc = 0x1C8BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BD0u;
    // 0x1c8bd4: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BD0u, 0x1C8BD8u)) {
        return;
    }
    ctx->pc = 0x1C8BD8u;
label_1c8bd8:
    // 0x1c8bd8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8bdc: 0x8e0503e8  lw          $a1, 0x3E8($s0)
    ctx->pc = 0x1c8bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1c8be0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BE0u;
    SET_GPR_U32(ctx, 31, 0x1C8BE8u);
    ctx->pc = 0x1C8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BE0u;
    // 0x1c8be4: 0xae0203f8  sw          $v0, 0x3F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BE0u, 0x1C8BE8u)) {
        return;
    }
    ctx->pc = 0x1C8BE8u;
label_1c8be8:
    // 0x1c8be8: 0x8e0503ec  lw          $a1, 0x3EC($s0)
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1c8bec: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c8bf0: 0xc06c97c  jal         func_1B25F0
    ctx->pc = 0x1C8BF0u;
    SET_GPR_U32(ctx, 31, 0x1C8BF8u);
    ctx->pc = 0x1C8BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BF0u;
    // 0x1c8bf4: 0xae0203fc  sw          $v0, 0x3FC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C8BF0u, 0x1C8BF8u)) {
        return;
    }
    ctx->pc = 0x1C8BF8u;
label_1c8bf8:
    // 0x1c8bf8: 0xae0203f4  sw          $v0, 0x3F4($s0)
    ctx->pc = 0x1c8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 2));
    // 0x1c8bfc: 0xc072308  jal         func_1C8C20
    ctx->pc = 0x1C8BFCu;
    SET_GPR_U32(ctx, 31, 0x1C8C04u);
    ctx->pc = 0x1C8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BFCu;
    // 0x1c8c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C8C20u, 0x1C8BFCu, 0x1C8C04u)) {
        return;
    }
    ctx->pc = 0x1C8C04u;
label_1c8c04:
    // 0x1c8c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c08: 0xc07268a  jal         func_1C9A28
    ctx->pc = 0x1C8C08u;
    SET_GPR_U32(ctx, 31, 0x1C8C10u);
    ctx->pc = 0x1C8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C08u;
    // 0x1c8c0c: 0x8c850274  lw          $a1, 0x274($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C9A28u, 0x1C8C08u, 0x1C8C10u)) {
        return;
    }
    ctx->pc = 0x1C8C10u;
label_1c8c10:
    // 0x1c8c10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C18u;
        // 0x1c8c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8C20u;
}
