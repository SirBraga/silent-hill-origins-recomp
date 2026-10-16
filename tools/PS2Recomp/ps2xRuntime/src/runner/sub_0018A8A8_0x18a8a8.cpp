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

// Function: sub_0018A8A8
// Address: 0x18a8a8 - 0x18aa80
void sub_0018A8A8_0x18a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A8A8_0x18a8a8");
#endif

    switch (ctx->pc) {
        case 0x18a8e0u: goto label_18a8e0;
        case 0x18a8f8u: goto label_18a8f8;
        case 0x18a900u: goto label_18a900;
        case 0x18a918u: goto label_18a918;
        case 0x18a958u: goto label_18a958;
        case 0x18a988u: goto label_18a988;
        case 0x18a9c8u: goto label_18a9c8;
        case 0x18a9e8u: goto label_18a9e8;
        case 0x18a9f8u: goto label_18a9f8;
        case 0x18a9fcu: goto label_18a9fc;
        case 0x18aa4cu: goto label_18aa4c;
        default: break;
    }

    ctx->pc = 0x18a8a8u;

    // 0x18a8a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a8ac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18a8b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18a8b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18a8b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18a8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a8c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18a8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a8c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18a8cc: 0x8eb2002c  lw          $s2, 0x2C($s5)
    ctx->pc = 0x18a8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x18a8d0: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x18A8D0u;
    {
        const bool branch_taken_0x18a8d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8D0u;
        // 0x18a8d4: 0x26b00028  addiu       $s0, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8d0) {
            ctx->pc = 0x18A9F8u;
            goto label_18a9f8;
        }
    }
    ctx->pc = 0x18A8D8u;
    // 0x18a8d8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x18a8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18a8dc: 0x0  nop
    ctx->pc = 0x18a8dcu;
    // NOP
label_18a8e0:
    // 0x18a8e0: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x18A8E0u;
    {
        const bool branch_taken_0x18a8e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8E0u;
        // 0x18a8e4: 0x26620024  addiu       $v0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8e0) {
            ctx->pc = 0x18A9E8u;
            goto label_18a9e8;
        }
    }
    ctx->pc = 0x18A8E8u;
    // 0x18a8e8: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
    // 0x18a8ec: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18a8f0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18A8F0u;
    {
        const bool branch_taken_0x18a8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F0u;
        // 0x18a8f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8f0) {
            ctx->pc = 0x18A964u;
            goto label_18a964;
        }
    }
    ctx->pc = 0x18A8F8u;
label_18a8f8:
    // 0x18a8f8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A8F8u;
    SET_GPR_U32(ctx, 31, 0x18A900u);
    ctx->pc = 0x18A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8F8u;
    // 0x18a8fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A8F8u, 0x18A900u)) {
        return;
    }
    ctx->pc = 0x18A900u;
label_18a900:
    // 0x18a900: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18a904: 0x0  nop
    ctx->pc = 0x18a904u;
    // NOP
    // 0x18a908: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18A908u;
    {
        const bool branch_taken_0x18a908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a908) {
            ctx->pc = 0x18A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a8f8;
        }
    }
    ctx->pc = 0x18A910u;
    // 0x18a910: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18A910u;
    {
        const bool branch_taken_0x18a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A910u;
        // 0x18a914: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a910) {
            ctx->pc = 0x18A968u;
            goto label_18a968;
        }
    }
    ctx->pc = 0x18A918u;
label_18a918:
    // 0x18a918: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A918u;
    {
        const bool branch_taken_0x18a918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a918) {
            ctx->pc = 0x18A91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A918u;
            // 0x18a91c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A968u;
            goto label_18a968;
        }
    }
    ctx->pc = 0x18A920u;
    // 0x18a920: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a924: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A924u;
    {
        const bool branch_taken_0x18a924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A924u;
        // 0x18a928: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a924) {
            ctx->pc = 0x18A934u;
            goto label_18a934;
        }
    }
    ctx->pc = 0x18A92Cu;
    // 0x18a92c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A92Cu;
    {
        const bool branch_taken_0x18a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A92Cu;
        // 0x18a930: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a92c) {
            ctx->pc = 0x18A938u;
            goto label_18a938;
        }
    }
    ctx->pc = 0x18A934u;
label_18a934:
    // 0x18a934: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18a934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18a938:
    // 0x18a938: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a93c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A93Cu;
    {
        const bool branch_taken_0x18a93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A93Cu;
        // 0x18a940: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a93c) {
            ctx->pc = 0x18A94Cu;
            goto label_18a94c;
        }
    }
    ctx->pc = 0x18A944u;
    // 0x18a944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A944u;
    {
        const bool branch_taken_0x18a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A944u;
        // 0x18a948: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a944) {
            ctx->pc = 0x18A950u;
            goto label_18a950;
        }
    }
    ctx->pc = 0x18A94Cu;
label_18a94c:
    // 0x18a94c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18a950:
    // 0x18a950: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A950u;
    SET_GPR_U32(ctx, 31, 0x18A958u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A950u, 0x18A958u)) {
        return;
    }
    ctx->pc = 0x18A958u;
label_18a958:
    // 0x18a958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a960: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18a960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_18a964:
    // 0x18a964: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18a968:
    // 0x18a968: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18A968u;
    {
        const bool branch_taken_0x18a968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a968) {
            ctx->pc = 0x18A96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A968u;
            // 0x18a96c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a918;
        }
    }
    ctx->pc = 0x18A970u;
    // 0x18a970: 0x26828ea8  addiu       $v0, $s4, -0x7158
    ctx->pc = 0x18a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938280));
    // 0x18a974: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a978: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18A978u;
    {
        const bool branch_taken_0x18a978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A978u;
        // 0x18a97c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a978) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A980u;
    // 0x18a980: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a984: 0x0  nop
    ctx->pc = 0x18a984u;
    // NOP
label_18a988:
    // 0x18a988: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A988u;
    {
        const bool branch_taken_0x18a988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a988) {
            ctx->pc = 0x18A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A988u;
            // 0x18a98c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9D8u;
            goto label_18a9d8;
        }
    }
    ctx->pc = 0x18A990u;
    // 0x18a990: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a994: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A994u;
    {
        const bool branch_taken_0x18a994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A994u;
        // 0x18a998: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a994) {
            ctx->pc = 0x18A9A4u;
            goto label_18a9a4;
        }
    }
    ctx->pc = 0x18A99Cu;
    // 0x18a99c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A99Cu;
    {
        const bool branch_taken_0x18a99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A99Cu;
        // 0x18a9a0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a99c) {
            ctx->pc = 0x18A9A8u;
            goto label_18a9a8;
        }
    }
    ctx->pc = 0x18A9A4u;
label_18a9a4:
    // 0x18a9a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18a9a8:
    // 0x18a9a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18a9ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9ACu;
    {
        const bool branch_taken_0x18a9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9ACu;
        // 0x18a9b0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9ac) {
            ctx->pc = 0x18A9BCu;
            goto label_18a9bc;
        }
    }
    ctx->pc = 0x18A9B4u;
    // 0x18a9b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A9B4u;
    {
        const bool branch_taken_0x18a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9B4u;
        // 0x18a9b8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9b4) {
            ctx->pc = 0x18A9C0u;
            goto label_18a9c0;
        }
    }
    ctx->pc = 0x18A9BCu;
label_18a9bc:
    // 0x18a9bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18a9c0:
    // 0x18a9c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A9C0u;
    SET_GPR_U32(ctx, 31, 0x18A9C8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A9C0u, 0x18A9C8u)) {
        return;
    }
    ctx->pc = 0x18A9C8u;
label_18a9c8:
    // 0x18a9c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a9cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a9d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18a9d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18a9d8:
    // 0x18a9d8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18A9D8u;
    {
        const bool branch_taken_0x18a9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a9d8) {
            ctx->pc = 0x18A9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9D8u;
            // 0x18a9dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a988;
        }
    }
    ctx->pc = 0x18A9E0u;
label_18a9e0:
    // 0x18a9e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18A9E0u;
    SET_GPR_U32(ctx, 31, 0x18A9E8u);
    ctx->pc = 0x18A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9E0u;
    // 0x18a9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18A9E0u, 0x18A9E8u)) {
        return;
    }
    ctx->pc = 0x18A9E8u;
label_18a9e8:
    // 0x18a9e8: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18a9ec: 0x5640ffbc  bnel        $s2, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x18A9ECu;
    {
        const bool branch_taken_0x18a9ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a9ec) {
            ctx->pc = 0x18A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9ECu;
            // 0x18a9f0: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a8e0;
        }
    }
    ctx->pc = 0x18A9F4u;
    // 0x18a9f4: 0x26b00028  addiu       $s0, $s5, 0x28
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_18a9f8:
    // 0x18a9f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18a9fc:
    // 0x18a9fc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x18A9FCu;
    {
        const bool branch_taken_0x18a9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a9fc) {
            ctx->pc = 0x18AA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9FCu;
            // 0x18aa00: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AA5Cu;
            goto label_18aa5c;
        }
    }
    ctx->pc = 0x18AA04u;
    // 0x18aa04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18aa08: 0x0  nop
    ctx->pc = 0x18aa08u;
    // NOP
    // 0x18aa0c: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18AA0Cu;
    {
        const bool branch_taken_0x18aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa0c) {
            ctx->pc = 0x18A9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a9fc;
        }
    }
    ctx->pc = 0x18AA14u;
    // 0x18aa14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18aa18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA18u;
    {
        const bool branch_taken_0x18aa18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA18u;
        // 0x18aa1c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa18) {
            ctx->pc = 0x18AA28u;
            goto label_18aa28;
        }
    }
    ctx->pc = 0x18AA20u;
    // 0x18aa20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AA20u;
    {
        const bool branch_taken_0x18aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA20u;
        // 0x18aa24: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa20) {
            ctx->pc = 0x18AA2Cu;
            goto label_18aa2c;
        }
    }
    ctx->pc = 0x18AA28u;
label_18aa28:
    // 0x18aa28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18aa2c:
    // 0x18aa2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18aa30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA30u;
    {
        const bool branch_taken_0x18aa30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA30u;
        // 0x18aa34: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa30) {
            ctx->pc = 0x18AA40u;
            goto label_18aa40;
        }
    }
    ctx->pc = 0x18AA38u;
    // 0x18aa38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AA38u;
    {
        const bool branch_taken_0x18aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA38u;
        // 0x18aa3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa38) {
            ctx->pc = 0x18AA44u;
            goto label_18aa44;
        }
    }
    ctx->pc = 0x18AA40u;
label_18aa40:
    // 0x18aa40: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18aa44:
    // 0x18aa44: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18AA44u;
    SET_GPR_U32(ctx, 31, 0x18AA4Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18AA44u, 0x18AA4Cu)) {
        return;
    }
    ctx->pc = 0x18AA4Cu;
label_18aa4c:
    // 0x18aa4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18aa50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18aa54: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x18AA54u;
    {
        const bool branch_taken_0x18aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA54u;
        // 0x18aa58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa54) {
            ctx->pc = 0x18A9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a9f8;
        }
    }
    ctx->pc = 0x18AA5Cu;
label_18aa5c:
    // 0x18aa5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18aa5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18aa60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18aa60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18aa64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18aa64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aa68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18aa68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aa6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18aa6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aa70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA74u;
        // 0x18aa78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AA7Cu;
    // 0x18aa7c: 0x0  nop
    ctx->pc = 0x18aa7cu;
    // NOP
    ctx->pc = 0x18aa80u;
}
