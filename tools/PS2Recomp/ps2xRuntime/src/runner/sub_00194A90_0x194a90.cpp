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

// Function: sub_00194A90
// Address: 0x194a90 - 0x194bb8
void sub_00194A90_0x194a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194A90_0x194a90");
#endif

    switch (ctx->pc) {
        case 0x194ab4u: goto label_194ab4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b48u: goto label_194b48;
        case 0x194b58u: goto label_194b58;
        case 0x194b90u: goto label_194b90;
        default: break;
    }

    ctx->pc = 0x194a90u;

    // 0x194a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194a94: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x194a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x194a98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x194a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x194a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194aa0: 0x8c46bf40  lw          $a2, -0x40C0($v0)
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBF40u));
    // 0x194aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x194aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194aac: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x194AACu;
    SET_GPR_U32(ctx, 31, 0x194AB4u);
    ctx->pc = 0x194AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AACu;
    // 0x194ab0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x194AACu, 0x194AB4u)) {
        return;
    }
    ctx->pc = 0x194AB4u;
label_194ab4:
    // 0x194ab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194abc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x194ABCu;
    {
        const bool branch_taken_0x194abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ABCu;
        // 0x194ac0: 0x3c11006a  lui         $s1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194abc) {
            ctx->pc = 0x194BA0u;
            goto label_194ba0;
        }
    }
    ctx->pc = 0x194AC4u;
    // 0x194ac4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x194ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_194ac8:
    // 0x194ac8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x194acc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194ACCu;
    {
        const bool branch_taken_0x194acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ACCu;
        // 0x194ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194acc) {
            ctx->pc = 0x194AE4u;
            goto label_194ae4;
        }
    }
    ctx->pc = 0x194AD4u;
    // 0x194ad4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x194ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194adc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x194ADCu;
    {
        const bool branch_taken_0x194adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ADCu;
        // 0x194ae0: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194adc) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194AE4u;
label_194ae4:
    // 0x194ae4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194AE4u;
    {
        const bool branch_taken_0x194ae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x194AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE4u;
        // 0x194ae8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ae4) {
            ctx->pc = 0x194AFCu;
            goto label_194afc;
        }
    }
    ctx->pc = 0x194AECu;
    // 0x194aec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x194af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194af4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x194AF4u;
    {
        const bool branch_taken_0x194af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF4u;
        // 0x194af8: 0x26050098  addiu       $a1, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194af4) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194AFCu;
label_194afc:
    // 0x194afc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194AFCu;
    {
        const bool branch_taken_0x194afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x194B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AFCu;
        // 0x194b00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194afc) {
            ctx->pc = 0x194B14u;
            goto label_194b14;
        }
    }
    ctx->pc = 0x194B04u;
    // 0x194b04: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x194b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x194B0Cu;
    {
        const bool branch_taken_0x194b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B0Cu;
        // 0x194b10: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b0c) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194B14u;
label_194b14:
    // 0x194b14: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x194B14u;
    {
        const bool branch_taken_0x194b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x194B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B14u;
        // 0x194b18: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b14) {
            ctx->pc = 0x194B50u;
            goto label_194b50;
        }
    }
    ctx->pc = 0x194B1Cu;
    // 0x194b1c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x194b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x194B24u;
    {
        const bool branch_taken_0x194b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B24u;
        // 0x194b28: 0x260500a8  addiu       $a1, $s0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b24) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194B2Cu;
label_194b2c:
    // 0x194b2c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194b30: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x194b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x194b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b38: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x194b3c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_194b40:
    // 0x194b40: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x194B40u;
    SET_GPR_U32(ctx, 31, 0x194B48u);
    ctx->pc = 0x194B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B40u;
    // 0x194b44: 0x26279970  addiu       $a3, $s1, -0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x194B40u, 0x194B48u)) {
        return;
    }
    ctx->pc = 0x194B48u;
label_194b48:
    // 0x194b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x194B48u;
    {
        const bool branch_taken_0x194b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B48u;
        // 0x194b4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b48) {
            ctx->pc = 0x194B78u;
            goto label_194b78;
        }
    }
    ctx->pc = 0x194B50u;
label_194b50:
    // 0x194b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b54: 0x24438b58  addiu       $v1, $v0, -0x74A8
    ctx->pc = 0x194b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937432));
label_194b58:
    // 0x194b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194b5c: 0x5044fff3  beql        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x194B5Cu;
    {
        const bool branch_taken_0x194b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x194b5c) {
            ctx->pc = 0x194B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194B5Cu;
            // 0x194b60: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194b2c;
        }
    }
    ctx->pc = 0x194B64u;
    // 0x194b64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x194b68: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x194b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x194b6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x194B6Cu;
    {
        const bool branch_taken_0x194b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B6Cu;
        // 0x194b70: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b6c) {
            ctx->pc = 0x194B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194b58;
        }
    }
    ctx->pc = 0x194B74u;
    // 0x194b74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x194b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_194b78:
    // 0x194b78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194b80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x194b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194b88: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x194B88u;
    SET_GPR_U32(ctx, 31, 0x194B90u);
    ctx->pc = 0x194B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B88u;
    // 0x194b8c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x194B88u, 0x194B90u)) {
        return;
    }
    ctx->pc = 0x194B90u;
label_194b90:
    // 0x194b90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x194b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194b98: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x194B98u;
    {
        const bool branch_taken_0x194b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B98u;
        // 0x194b9c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b98) {
            ctx->pc = 0x194AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194ac8;
        }
    }
    ctx->pc = 0x194BA0u;
label_194ba0:
    // 0x194ba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x194ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194ba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194bac: 0x3e00008  jr          $ra
    ctx->pc = 0x194BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BACu;
        // 0x194bb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194BB4u;
    // 0x194bb4: 0x0  nop
    ctx->pc = 0x194bb4u;
    // NOP
    ctx->pc = 0x194bb8u;
}
