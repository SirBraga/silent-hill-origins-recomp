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

// Function: sub_001C1098
// Address: 0x1c1098 - 0x1c1178
void sub_001C1098_0x1c1098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1098_0x1c1098");
#endif

    switch (ctx->pc) {
        case 0x1c10d0u: goto label_1c10d0;
        case 0x1c10e0u: goto label_1c10e0;
        case 0x1c10f8u: goto label_1c10f8;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c115cu: goto label_1c115c;
        default: break;
    }

    ctx->pc = 0x1c1098u;

    // 0x1c1098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c109c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c10a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c10a4: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1c10a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c10a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c10ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c10acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c10b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c10b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c10b8: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1c10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1c10bc: 0x8e240454  lw          $a0, 0x454($s1)
    ctx->pc = 0x1c10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1108)));
    // 0x1c10c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C10C0u;
    {
        const bool branch_taken_0x1c10c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10C0u;
        // 0x1c10c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10c0) {
            ctx->pc = 0x1C10D4u;
            goto label_1c10d4;
        }
    }
    ctx->pc = 0x1C10C8u;
    // 0x1c10c8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C10C8u;
    SET_GPR_U32(ctx, 31, 0x1C10D0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C10C8u, 0x1C10D0u)) {
        return;
    }
    ctx->pc = 0x1C10D0u;
label_1c10d0:
    // 0x1c10d0: 0xae200454  sw          $zero, 0x454($s1)
    ctx->pc = 0x1c10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 0));
label_1c10d4:
    // 0x1c10d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10d8: 0xc0705e0  jal         func_1C1780
    ctx->pc = 0x1C10D8u;
    SET_GPR_U32(ctx, 31, 0x1C10E0u);
    ctx->pc = 0x1C10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10D8u;
    // 0x1c10dc: 0x26300314  addiu       $s0, $s1, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1780u, 0x1C10D8u, 0x1C10E0u)) {
        return;
    }
    ctx->pc = 0x1C10E0u;
label_1c10e0:
    // 0x1c10e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c10e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c10e8: 0x2442dd20  addiu       $v0, $v0, -0x22E0
    ctx->pc = 0x1c10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1c10ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C10ECu;
    {
        const bool branch_taken_0x1c10ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10ECu;
        // 0x1c10f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10ec) {
            ctx->pc = 0x1C1150u;
            goto label_1c1150;
        }
    }
    ctx->pc = 0x1C10F4u;
    // 0x1c10f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c10f8:
    // 0x1c10f8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C10F8u;
    {
        const bool branch_taken_0x1c10f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10f8) {
            ctx->pc = 0x1C10FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C10F8u;
            // 0x1c10fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1148u;
            goto label_1c1148;
        }
    }
    ctx->pc = 0x1C1100u;
    // 0x1c1100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c1104: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1104u;
    {
        const bool branch_taken_0x1c1104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1104u;
        // 0x1c1108: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1104) {
            ctx->pc = 0x1C1114u;
            goto label_1c1114;
        }
    }
    ctx->pc = 0x1C110Cu;
    // 0x1c110c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C110Cu;
    {
        const bool branch_taken_0x1c110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C110Cu;
        // 0x1c1110: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c110c) {
            ctx->pc = 0x1C1118u;
            goto label_1c1118;
        }
    }
    ctx->pc = 0x1C1114u;
label_1c1114:
    // 0x1c1114: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c1114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c1118:
    // 0x1c1118: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c111c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C111Cu;
    {
        const bool branch_taken_0x1c111c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C111Cu;
        // 0x1c1120: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c111c) {
            ctx->pc = 0x1C112Cu;
            goto label_1c112c;
        }
    }
    ctx->pc = 0x1C1124u;
    // 0x1c1124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1124u;
    {
        const bool branch_taken_0x1c1124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1124u;
        // 0x1c1128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1124) {
            ctx->pc = 0x1C1130u;
            goto label_1c1130;
        }
    }
    ctx->pc = 0x1C112Cu;
label_1c112c:
    // 0x1c112c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c112cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c1130:
    // 0x1c1130: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C1130u;
    SET_GPR_U32(ctx, 31, 0x1C1138u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C1130u, 0x1C1138u)) {
        return;
    }
    ctx->pc = 0x1C1138u;
label_1c1138:
    // 0x1c1138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c113c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1140: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c1140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c1144: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1148:
    // 0x1c1148: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C1148u;
    {
        const bool branch_taken_0x1c1148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1148) {
            ctx->pc = 0x1C114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1148u;
            // 0x1c114c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C10F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C1150u;
label_1c1150:
    // 0x1c1150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1154: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C1154u;
    SET_GPR_U32(ctx, 31, 0x1C115Cu);
    ctx->pc = 0x1C1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1154u;
    // 0x1c1158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C1154u, 0x1C115Cu)) {
        return;
    }
    ctx->pc = 0x1C115Cu;
label_1c115c:
    // 0x1c115c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c115cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1160: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c1160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1164: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c1164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c116c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C116Cu;
        // 0x1c1170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1174u;
    // 0x1c1174: 0x0  nop
    ctx->pc = 0x1c1174u;
    // NOP
    ctx->pc = 0x1c1178u;
}
