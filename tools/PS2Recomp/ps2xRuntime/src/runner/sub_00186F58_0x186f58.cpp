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

// Function: sub_00186F58
// Address: 0x186f58 - 0x187038
void sub_00186F58_0x186f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186F58_0x186f58");
#endif

    switch (ctx->pc) {
        case 0x186f74u: goto label_186f74;
        case 0x186fe4u: goto label_186fe4;
        case 0x186ffcu: goto label_186ffc;
        case 0x187014u: goto label_187014;
        case 0x18701cu: goto label_18701c;
        default: break;
    }

    ctx->pc = 0x186f58u;

    // 0x186f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186f60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x186f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x186f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186f6c: 0xc061c0e  jal         func_187038
    ctx->pc = 0x186F6Cu;
    SET_GPR_U32(ctx, 31, 0x186F74u);
    ctx->pc = 0x186F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F6Cu;
    // 0x186f70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187038u, 0x186F6Cu, 0x186F74u)) {
        return;
    }
    ctx->pc = 0x186F74u;
label_186f74:
    // 0x186f74: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x186f78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x186f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x186f7c: 0x2024018  mult        $t0, $s0, $v0
    ctx->pc = 0x186f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x186f80: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x186f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x186f84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x186f88: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186F88u;
    {
        const bool branch_taken_0x186f88 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x186F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F88u;
        // 0x186f8c: 0x884021  addu        $t0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f88) {
            ctx->pc = 0x186FA0u;
            goto label_186fa0;
        }
    }
    ctx->pc = 0x186F90u;
    // 0x186f90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x186f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f94: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x186f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x186f98: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x186F98u;
    {
        const bool branch_taken_0x186f98 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x186f98) {
            ctx->pc = 0x187014u;
            goto label_187014;
        }
    }
    ctx->pc = 0x186FA0u;
label_186fa0:
    // 0x186fa0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x186fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x186fa4: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x186fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x186fa8: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x186fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x186fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186fb4: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x186fb8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x186fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x186fbc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x186fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x186fc0: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x186fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x186fc4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x186fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x186fc8: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x186fcc: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x186fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x186fd0: 0x8d020040  lw          $v0, 0x40($t0)
    ctx->pc = 0x186fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x186fd4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x186fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x186fd8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x186fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x186fdc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x186FDCu;
    SET_GPR_U32(ctx, 31, 0x186FE4u);
    ctx->pc = 0x186FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FDCu;
    // 0x186fe0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x186FDCu, 0x186FE4u)) {
        return;
    }
    ctx->pc = 0x186FE4u;
label_186fe4:
    // 0x186fe4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x186fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186fec: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x186fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x186ff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ff4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x186FF4u;
    SET_GPR_U32(ctx, 31, 0x186FFCu);
    ctx->pc = 0x186FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FF4u;
    // 0x186ff8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x186FF4u, 0x186FFCu)) {
        return;
    }
    ctx->pc = 0x186FFCu;
label_186ffc:
    // 0x186ffc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x187000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187004: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x187004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x187008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18700c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x18700Cu;
    SET_GPR_U32(ctx, 31, 0x187014u);
    ctx->pc = 0x187010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18700Cu;
    // 0x187010: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18700Cu, 0x187014u)) {
        return;
    }
    ctx->pc = 0x187014u;
label_187014:
    // 0x187014: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x187014u;
    SET_GPR_U32(ctx, 31, 0x18701Cu);
    ctx->pc = 0x187018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187014u;
    // 0x187018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x187014u, 0x18701Cu)) {
        return;
    }
    ctx->pc = 0x18701Cu;
label_18701c:
    // 0x18701c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x18701cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x187020: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18702c: 0x3e00008  jr          $ra
    ctx->pc = 0x18702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18702Cu;
        // 0x187030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187034u;
    // 0x187034: 0x0  nop
    ctx->pc = 0x187034u;
    // NOP
    ctx->pc = 0x187038u;
}
