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

// Function: sub_0029A050
// Address: 0x29a050 - 0x29a168
void sub_0029A050_0x29a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A050_0x29a050");
#endif

    switch (ctx->pc) {
        case 0x29a13cu: goto label_29a13c;
        case 0x29a150u: goto label_29a150;
        default: break;
    }

    ctx->pc = 0x29a050u;

    // 0x29a050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a054: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29a058: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x29a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29a05c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29a060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29a068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a06c: 0x2444d858  addiu       $a0, $v0, -0x27A8
    ctx->pc = 0x29a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x29a070: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x29a070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a074: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x29a074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a078: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29A078u;
    {
        const bool branch_taken_0x29a078 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A078u;
        // 0x29a07c: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a078) {
            ctx->pc = 0x29A0ACu;
            goto label_29a0ac;
        }
    }
    ctx->pc = 0x29A080u;
    // 0x29a080: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29a080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a084: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29a088: 0xdc46d858  ld          $a2, -0x27A8($v0)
    ctx->pc = 0x29a088u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957144)));
    // 0x29a08c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x29a08cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a090: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x29a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x29a094: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x29a094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29a098: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x29a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x29a09c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x29a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x29a0a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a0a4: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x29a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x29a0a8: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x29a0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_29a0ac:
    // 0x29a0ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a0b0: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x29a0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x29a0b4: 0x2503d878  addiu       $v1, $t0, -0x2788
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957176));
    // 0x29a0b8: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x29a0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x29a0bc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x29a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x29a0c0: 0x2525d868  addiu       $a1, $t1, -0x2798
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957160));
    // 0x29a0c4: 0x94660008  lhu         $a2, 0x8($v1)
    ctx->pc = 0x29a0c4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x6AD880u));
    // 0x29a0c8: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29a0cc: 0xdd07d878  ld          $a3, -0x2788($t0)
    ctx->pc = 0x29a0ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294957176)));
    // 0x29a0d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a0d4: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x29a0d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29a0d8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29a0dc: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x29a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x29a0e0: 0x2543fff8  addiu       $v1, $t2, -0x8
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x29a0e4: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x29a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x29a0e8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x29a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29a0ec: 0xac9d0028  sw          $sp, 0x28($a0)
    ctx->pc = 0x29a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 29));
    // 0x29a0f0: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x29a0f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x29a0f4: 0xad450028  sw          $a1, 0x28($t2)
    ctx->pc = 0x29a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 5));
    // 0x29a0f8: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x29a0f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29a0fc: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x29a0fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29a100: 0xa7a60008  sh          $a2, 0x8($sp)
    ctx->pc = 0x29a100u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x29a104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a108: 0xdd27d868  ld          $a3, -0x2798($t1)
    ctx->pc = 0x29a108u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 4294957160)));
    // 0x29a10c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x29a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x29a110: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x29a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x29a114: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x29a114u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x29a118: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A118u;
    {
        const bool branch_taken_0x29a118 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A118u;
        // 0x29a11c: 0xad5d0028  sw          $sp, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a118) {
            ctx->pc = 0x29A13Cu;
            goto label_29a13c;
        }
    }
    ctx->pc = 0x29A120u;
    // 0x29a120: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29a124: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x29a128: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x29a12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A12Cu;
    {
        const bool branch_taken_0x29a12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A12Cu;
        // 0x29a130: 0xad420028  sw          $v0, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a12c) {
            ctx->pc = 0x29A13Cu;
            goto label_29a13c;
        }
    }
    ctx->pc = 0x29A134u;
    // 0x29a134: 0xc0808d4  jal         func_202350
    ctx->pc = 0x29A134u;
    SET_GPR_U32(ctx, 31, 0x29A13Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x29A134u, 0x29A13Cu)) {
        return;
    }
    ctx->pc = 0x29A13Cu;
label_29a13c:
    // 0x29a13c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x29a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29a140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A140u;
    {
        const bool branch_taken_0x29a140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A140u;
        // 0x29a144: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a140) {
            ctx->pc = 0x29A154u;
            goto label_29a154;
        }
    }
    ctx->pc = 0x29A148u;
    // 0x29a148: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29A148u;
    SET_GPR_U32(ctx, 31, 0x29A150u);
    ctx->pc = 0x29A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A148u;
    // 0x29a14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29A148u, 0x29A150u)) {
        return;
    }
    ctx->pc = 0x29A150u;
label_29a150:
    // 0x29a150: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29a154:
    // 0x29a154: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x29a154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a158: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29a158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a15c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A15Cu;
        // 0x29a160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A164u;
    // 0x29a164: 0x0  nop
    ctx->pc = 0x29a164u;
    // NOP
    ctx->pc = 0x29a168u;
}
