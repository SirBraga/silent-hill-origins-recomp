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

// Function: sub_00199338
// Address: 0x199338 - 0x1993f0
void sub_00199338_0x199338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199338_0x199338");
#endif

    switch (ctx->pc) {
        case 0x199358u: goto label_199358;
        case 0x199374u: goto label_199374;
        case 0x19937cu: goto label_19937c;
        case 0x199384u: goto label_199384;
        case 0x19938cu: goto label_19938c;
        case 0x199394u: goto label_199394;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993d8u: goto label_1993d8;
        default: break;
    }

    ctx->pc = 0x199338u;

    // 0x199338: 0x27bdefd0  addiu       $sp, $sp, -0x1030
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963152));
    // 0x19933c: 0x7fb01010  sq          $s0, 0x1010($sp)
    ctx->pc = 0x19933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 16));
    // 0x199340: 0xe7b41020  swc1        $f20, 0x1020($sp)
    ctx->pc = 0x199340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4128), bits); }
    // 0x199344: 0xffbf1000  sd          $ra, 0x1000($sp)
    ctx->pc = 0x199344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4096), GPR_U64(ctx, 31));
    // 0x199348: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x199348u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19934c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x199350: 0xc0ab628  jal         func_2AD8A0
    ctx->pc = 0x199350u;
    SET_GPR_U32(ctx, 31, 0x199358u);
    ctx->pc = 0x199354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199350u;
    // 0x199354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD8A0u, 0x199350u, 0x199358u)) {
        return;
    }
    ctx->pc = 0x199358u;
label_199358:
    // 0x199358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19935c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19935cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x199360: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x199364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199368: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x19936c: 0xc0acabe  jal         func_2B2AF8
    ctx->pc = 0x19936Cu;
    SET_GPR_U32(ctx, 31, 0x199374u);
    ctx->pc = 0x199370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19936Cu;
    // 0x199370: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2AF8u, 0x19936Cu, 0x199374u)) {
        return;
    }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0xc0abbaa  jal         func_2AEEA8
    ctx->pc = 0x199374u;
    SET_GPR_U32(ctx, 31, 0x19937Cu);
    ctx->pc = 0x199378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199374u;
    // 0x199378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AEEA8u, 0x199374u, 0x19937Cu)) {
        return;
    }
    ctx->pc = 0x19937Cu;
label_19937c:
    // 0x19937c: 0xc0abf34  jal         func_2AFCD0
    ctx->pc = 0x19937Cu;
    SET_GPR_U32(ctx, 31, 0x199384u);
    ctx->pc = 0x199380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19937Cu;
    // 0x199380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AFCD0u, 0x19937Cu, 0x199384u)) {
        return;
    }
    ctx->pc = 0x199384u;
label_199384:
    // 0x199384: 0xc0abe86  jal         func_2AFA18
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x199388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199384u;
    // 0x199388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AFA18u, 0x199384u, 0x19938Cu)) {
        return;
    }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0xc0acac8  jal         func_2B2B20
    ctx->pc = 0x19938Cu;
    SET_GPR_U32(ctx, 31, 0x199394u);
    ctx->pc = 0x199390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19938Cu;
    // 0x199390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2B20u, 0x19938Cu, 0x199394u)) {
        return;
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x199398: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x19939c: 0x27a20ffc  addiu       $v0, $sp, 0xFFC
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4092));
label_1993a0:
    // 0x1993a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1993a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1993a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1993a8: 0x0  nop
    ctx->pc = 0x1993a8u;
    // NOP
    // 0x1993ac: 0x0  nop
    ctx->pc = 0x1993acu;
    // NOP
    // 0x1993b0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1993B0u;
    {
        const bool branch_taken_0x1993b0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993B0u;
        // 0x1993b4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993b0) {
            ctx->pc = 0x1993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1993a0;
        }
    }
    ctx->pc = 0x1993B8u;
    // 0x1993b8: 0x8cc28bc8  lw          $v0, -0x7438($a2)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937544)));
    // 0x1993bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1993bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1993c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1993c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1993c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1993cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1993d0: 0xc0acada  jal         func_2B2B68
    ctx->pc = 0x1993D0u;
    SET_GPR_U32(ctx, 31, 0x1993D8u);
    ctx->pc = 0x1993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993D0u;
    // 0x1993d4: 0xacc58bc8  sw          $a1, -0x7438($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294937544), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2B68u, 0x1993D0u, 0x1993D8u)) {
        return;
    }
    ctx->pc = 0x1993D8u;
label_1993d8:
    // 0x1993d8: 0x7bb01010  lq          $s0, 0x1010($sp)
    ctx->pc = 0x1993d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x1993dc: 0xdfbf1000  ld          $ra, 0x1000($sp)
    ctx->pc = 0x1993dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x1993e0: 0xc7b41020  lwc1        $f20, 0x1020($sp)
    ctx->pc = 0x1993e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1993e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1993E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993E4u;
        // 0x1993e8: 0x27bd1030  addiu       $sp, $sp, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1993E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1993ECu;
    // 0x1993ec: 0x0  nop
    ctx->pc = 0x1993ecu;
    // NOP
    ctx->pc = 0x1993f0u;
}
