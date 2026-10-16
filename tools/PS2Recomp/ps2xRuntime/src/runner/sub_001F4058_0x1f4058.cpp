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

// Function: sub_001F4058
// Address: 0x1f4058 - 0x1f4178
void sub_001F4058_0x1f4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4058_0x1f4058");
#endif

    switch (ctx->pc) {
        case 0x1f4084u: goto label_1f4084;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4128u: goto label_1f4128;
        default: break;
    }

    ctx->pc = 0x1f4058u;

    // 0x1f4058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f405c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1f4060: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f4060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f4064: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f4064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4068: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f406c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f4070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f4074: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f4074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1f4078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f407c: 0xc07cd70  jal         func_1F35C0
    ctx->pc = 0x1F407Cu;
    SET_GPR_U32(ctx, 31, 0x1F4084u);
    ctx->pc = 0x1F4080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F407Cu;
    // 0x1f4080: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35C0u, 0x1F407Cu, 0x1F4084u)) {
        return;
    }
    ctx->pc = 0x1F4084u;
label_1f4084:
    // 0x1f4084: 0xc07d248  jal         func_1F4920
    ctx->pc = 0x1F4084u;
    SET_GPR_U32(ctx, 31, 0x1F408Cu);
    ctx->pc = 0x1F4920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4920u, 0x1F4084u, 0x1F408Cu)) {
        return;
    }
    ctx->pc = 0x1F408Cu;
label_1f408c:
    // 0x1f408c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f4090: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4090u;
    {
        const bool branch_taken_0x1f4090 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4090u;
        // 0x1f4094: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4090) {
            ctx->pc = 0x1F40F4u;
            goto label_1f40f4;
        }
    }
    ctx->pc = 0x1F4098u;
    // 0x1f4098: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1f409c: 0x0  nop
    ctx->pc = 0x1f409cu;
    // NOP
label_1f40a0:
    // 0x1f40a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f40a4: 0x8eb1eaf0  lw          $s1, -0x1510($s5)
    ctx->pc = 0x1f40a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961904)));
    // 0x1f40a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f40ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1f40acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f40b0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1F40B0u;
    SET_GPR_U32(ctx, 31, 0x1F40B8u);
    ctx->pc = 0x1F40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40B0u;
    // 0x1f40b4: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1F40B0u, 0x1F40B8u)) {
        return;
    }
    ctx->pc = 0x1F40B8u;
label_1f40b8:
    // 0x1f40b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F40B8u;
    {
        const bool branch_taken_0x1f40b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40B8u;
        // 0x1f40bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40b8) {
            ctx->pc = 0x1F40E0u;
            goto label_1f40e0;
        }
    }
    ctx->pc = 0x1F40C0u;
    // 0x1f40c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f40c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40c4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1F40C4u;
    SET_GPR_U32(ctx, 31, 0x1F40CCu);
    ctx->pc = 0x1F40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40C4u;
    // 0x1f40c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1F40C4u, 0x1F40CCu)) {
        return;
    }
    ctx->pc = 0x1F40CCu;
label_1f40cc:
    // 0x1f40cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F40CCu;
    {
        const bool branch_taken_0x1f40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40CCu;
        // 0x1f40d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40cc) {
            ctx->pc = 0x1F40E0u;
            goto label_1f40e0;
        }
    }
    ctx->pc = 0x1F40D4u;
    // 0x1f40d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f40d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f40d8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1F40D8u;
    SET_GPR_U32(ctx, 31, 0x1F40E0u);
    ctx->pc = 0x1F40DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40D8u;
    // 0x1f40dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1F40D8u, 0x1F40E0u)) {
        return;
    }
    ctx->pc = 0x1F40E0u;
label_1f40e0:
    // 0x1f40e0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1f40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f40e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f40e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f40e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f40e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f40ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F40ECu;
    {
        const bool branch_taken_0x1f40ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f40ec) {
            ctx->pc = 0x1F40F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F40ECu;
            // 0x1f40f0: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F40A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f40a0;
        }
    }
    ctx->pc = 0x1F40F4u;
label_1f40f4:
    // 0x1f40f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f40f8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1f40fc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1f40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f4100: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1f4104: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1f4108: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1f4108u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1f410c: 0x25088710  addiu       $t0, $t0, -0x78F0
    ctx->pc = 0x1f410cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936336));
    // 0x1f4110: 0x25298728  addiu       $t1, $t1, -0x78D8
    ctx->pc = 0x1f4110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936360));
    // 0x1f4114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4118: 0xc05e7fe  jal         func_179FF8
    ctx->pc = 0x1F4118u;
    SET_GPR_U32(ctx, 31, 0x1F4120u);
    ctx->pc = 0x1F411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4118u;
    // 0x1f411c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179FF8u, 0x1F4118u, 0x1F4120u)) {
        return;
    }
    ctx->pc = 0x1F4120u;
label_1f4120:
    // 0x1f4120: 0xc07d084  jal         func_1F4210
    ctx->pc = 0x1F4120u;
    SET_GPR_U32(ctx, 31, 0x1F4128u);
    ctx->pc = 0x1F4210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4210u, 0x1F4120u, 0x1F4128u)) {
        return;
    }
    ctx->pc = 0x1F4128u;
label_1f4128:
    // 0x1f4128: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f412c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1f412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1f4130: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1f4134: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f4134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f4138: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f4138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f413c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f413cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f4140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4144: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f4144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4148: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f4148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f414c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4150: 0xac830150  sw          $v1, 0x150($a0)
    ctx->pc = 0x1f4150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
    // 0x1f4154: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4154u;
        // 0x1f4158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F415Cu;
    // 0x1f415c: 0x0  nop
    ctx->pc = 0x1f415cu;
    // NOP
    // 0x1f4160: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4164: 0x0  nop
    ctx->pc = 0x1f4164u;
    // NOP
    // 0x1f4168: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f4168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f416c: 0x0  nop
    ctx->pc = 0x1f416cu;
    // NOP
    // 0x1f4170: 0x0  nop
    ctx->pc = 0x1f4170u;
    // NOP
    // 0x1f4174: 0x0  nop
    ctx->pc = 0x1f4174u;
    // NOP
    ctx->pc = 0x1f4178u;
}
