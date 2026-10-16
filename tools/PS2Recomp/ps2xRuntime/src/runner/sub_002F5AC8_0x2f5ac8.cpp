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

// Function: sub_002F5AC8
// Address: 0x2f5ac8 - 0x2f5bf0
void sub_002F5AC8_0x2f5ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5AC8_0x2f5ac8");
#endif

    switch (ctx->pc) {
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5b34u: goto label_2f5b34;
        case 0x2f5b44u: goto label_2f5b44;
        case 0x2f5b64u: goto label_2f5b64;
        case 0x2f5bacu: goto label_2f5bac;
        case 0x2f5bb8u: goto label_2f5bb8;
        case 0x2f5bc8u: goto label_2f5bc8;
        default: break;
    }

    ctx->pc = 0x2f5ac8u;

    // 0x2f5ac8: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2f5ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x2f5acc: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x2f5accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
    // 0x2f5ad0: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x2f5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x2f5ad4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f5ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ad8: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x2f5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
    // 0x2f5adc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ae0: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f5ae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f5ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ae8: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x2f5ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
    // 0x2f5aec: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x2f5aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x2f5af0: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F5AF0u;
    SET_GPR_U32(ctx, 31, 0x2F5AF8u);
    ctx->pc = 0x2F5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AF0u;
    // 0x2f5af4: 0xffb00280  sd          $s0, 0x280($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F5AF0u, 0x2F5AF8u)) {
        return;
    }
    ctx->pc = 0x2F5AF8u;
label_2f5af8:
    // 0x2f5af8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F5AF8u;
    {
        const bool branch_taken_0x2f5af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AF8u;
        // 0x2f5afc: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5af8) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5B00u;
    // 0x2f5b00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f5b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b08: 0x24540158  addiu       $s4, $v0, 0x158
    ctx->pc = 0x2f5b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x2f5b0c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B14u);
    ctx->pc = 0x2F5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B0Cu;
    // 0x2f5b10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F5B0Cu, 0x2F5B14u)) {
        return;
    }
    ctx->pc = 0x2F5B14u;
label_2f5b14:
    // 0x2f5b14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5B14u;
    {
        const bool branch_taken_0x2f5b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B14u;
        // 0x2f5b18: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b14) {
            ctx->pc = 0x2F5B3Cu;
            goto label_2f5b3c;
        }
    }
    ctx->pc = 0x2F5B1Cu;
    // 0x2f5b1c: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f5b20: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2f5b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f5b24: 0x2484bf50  addiu       $a0, $a0, -0x40B0
    ctx->pc = 0x2f5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950736));
    // 0x2f5b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b2c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B34u);
    ctx->pc = 0x2F5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B2Cu;
    // 0x2f5b30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5B2Cu, 0x2F5B34u)) {
        return;
    }
    ctx->pc = 0x2F5B34u;
label_2f5b34:
    // 0x2f5b34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F5B34u;
    {
        const bool branch_taken_0x2f5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b34) {
            ctx->pc = 0x2F5BB8u;
            goto label_2f5bb8;
        }
    }
    ctx->pc = 0x2F5B3Cu;
label_2f5b3c:
    // 0x2f5b3c: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F5B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B44u);
    ctx->pc = 0x2F5B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B3Cu;
    // 0x2f5b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F5B3Cu, 0x2F5B44u)) {
        return;
    }
    ctx->pc = 0x2F5B44u;
label_2f5b44:
    // 0x2f5b44: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F5B44u;
    {
        const bool branch_taken_0x2f5b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B44u;
        // 0x2f5b48: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b44) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5B4Cu;
    // 0x2f5b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f5b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b5c: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F5B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B64u);
    ctx->pc = 0x2F5B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B5Cu;
    // 0x2f5b60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F5B5Cu, 0x2F5B64u)) {
        return;
    }
    ctx->pc = 0x2F5B64u;
label_2f5b64:
    // 0x2f5b64: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5b68: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5b6c: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F5B6Cu;
    {
        const bool branch_taken_0x2f5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B6Cu;
        // 0x2f5b70: 0xdfbf02d0  ld          $ra, 0x2D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b6c) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5B74u;
    // 0x2f5b74: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2f5b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5b78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2f5b7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5B7Cu;
    {
        const bool branch_taken_0x2f5b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B7Cu;
        // 0x2f5b80: 0x24100898  addiu       $s0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b7c) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5B84u;
    // 0x2f5b84: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5b88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B88u;
        // 0x2f5b8c: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5B90u;
label_2f5b90:
    // 0x2f5b90: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f5b94: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x2f5b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f5b98: 0x2442bf50  addiu       $v0, $v0, -0x40B0
    ctx->pc = 0x2f5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
    // 0x2f5b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ba0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f5ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f5ba4: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5BA4u;
    SET_GPR_U32(ctx, 31, 0x2F5BACu);
    ctx->pc = 0x2F5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BA4u;
    // 0x2f5ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5BA4u, 0x2F5BACu)) {
        return;
    }
    ctx->pc = 0x2F5BACu;
label_2f5bac:
    // 0x2f5bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bb0: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x2F5BB0u;
    SET_GPR_U32(ctx, 31, 0x2F5BB8u);
    ctx->pc = 0x2F5BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BB0u;
    // 0x2f5bb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x2F5BB0u, 0x2F5BB8u)) {
        return;
    }
    ctx->pc = 0x2F5BB8u;
label_2f5bb8:
    // 0x2f5bb8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5BB8u;
    {
        const bool branch_taken_0x2f5bb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BB8u;
        // 0x2f5bbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bb8) {
            ctx->pc = 0x2F5BC8u;
            goto label_2f5bc8;
        }
    }
    ctx->pc = 0x2F5BC0u;
    // 0x2f5bc0: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5BC0u;
    SET_GPR_U32(ctx, 31, 0x2F5BC8u);
    ctx->pc = 0x2F5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BC0u;
    // 0x2f5bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5BC0u, 0x2F5BC8u)) {
        return;
    }
    ctx->pc = 0x2F5BC8u;
label_2f5bc8:
    // 0x2f5bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bcc: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x2f5bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2f5bd0:
    // 0x2f5bd0: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x2f5bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f5bd4: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x2f5bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f5bd8: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x2f5bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f5bdc: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x2f5bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f5be0: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x2f5be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2f5be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BE4u;
        // 0x2f5be8: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5BECu;
    // 0x2f5bec: 0x0  nop
    ctx->pc = 0x2f5becu;
    // NOP
    ctx->pc = 0x2f5bf0u;
}
