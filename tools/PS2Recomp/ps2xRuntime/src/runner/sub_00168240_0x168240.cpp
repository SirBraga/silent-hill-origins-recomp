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

// Function: sub_00168240
// Address: 0x168240 - 0x168358
void sub_00168240_0x168240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168240_0x168240");
#endif

    switch (ctx->pc) {
        case 0x168254u: goto label_168254;
        case 0x168310u: goto label_168310;
        case 0x168328u: goto label_168328;
        default: break;
    }

    ctx->pc = 0x168240u;

    // 0x168240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16824c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16824Cu;
    SET_GPR_U32(ctx, 31, 0x168254u);
    ctx->pc = 0x168250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16824Cu;
    // 0x168250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16824Cu, 0x168254u)) {
        return;
    }
    ctx->pc = 0x168254u;
label_168254:
    // 0x168254: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x168254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x168258: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x168258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x16825c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x168260: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x168264: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x168264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x168268: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16826c: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x16826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x168270: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x168270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x168274: 0x24423fe8  addiu       $v0, $v0, 0x3FE8
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16360));
    // 0x168278: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16827c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x16827cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x168280: 0x24634008  addiu       $v1, $v1, 0x4008
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16392));
    // 0x168284: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x168284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x168288: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x168288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16828c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168290: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x168290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
    // 0x168294: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x168294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x168298: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x168298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16829c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x16829cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1682a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1682a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1682a4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1682a8: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x1682ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1682acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1682b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1682b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682b4: 0x3c0142ba  lui         $at, 0x42BA
    ctx->pc = 0x1682b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17082 << 16));
    // 0x1682b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1682b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1682bc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1682bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1682c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1682c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1682c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1682c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1682c8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1682c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1682cc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1682ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1682d0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1682d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1682d4: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1682d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1682d8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1682dc: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1682dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1682e0: 0xe6060050  swc1        $f6, 0x50($s0)
    ctx->pc = 0x1682e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1682e4: 0xe6070054  swc1        $f7, 0x54($s0)
    ctx->pc = 0x1682e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1682e8: 0xe6090058  swc1        $f9, 0x58($s0)
    ctx->pc = 0x1682e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1682ec: 0xe608005c  swc1        $f8, 0x5C($s0)
    ctx->pc = 0x1682ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1682f0: 0xe6050060  swc1        $f5, 0x60($s0)
    ctx->pc = 0x1682f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1682f4: 0xe6040064  swc1        $f4, 0x64($s0)
    ctx->pc = 0x1682f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1682f8: 0xe6030068  swc1        $f3, 0x68($s0)
    ctx->pc = 0x1682f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x1682fc: 0xe602006c  swc1        $f2, 0x6C($s0)
    ctx->pc = 0x1682fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x168300: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x168300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x168304: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x168304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x168308: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x168308u;
    SET_GPR_U32(ctx, 31, 0x168310u);
    ctx->pc = 0x16830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168308u;
    // 0x16830c: 0xe609004c  swc1        $f9, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x168308u, 0x168310u)) {
        return;
    }
    ctx->pc = 0x168310u;
label_168310:
    // 0x168310: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x168310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x168314: 0x8c6286a0  lw          $v0, -0x7960($v1)
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3386A0u));
    // 0x168318: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x168318u;
    {
        const bool branch_taken_0x168318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168318) {
            ctx->pc = 0x16831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168318u;
            // 0x16831c: 0xac7086a0  sw          $s0, -0x7960($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294936224), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168320u;
            goto label_168320;
        }
    }
    ctx->pc = 0x168320u;
label_168320:
    // 0x168320: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168324: 0x26020134  addiu       $v0, $s0, 0x134
    ctx->pc = 0x168324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_168328:
    // 0x168328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x168328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16832c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168330: 0x0  nop
    ctx->pc = 0x168330u;
    // NOP
    // 0x168334: 0x0  nop
    ctx->pc = 0x168334u;
    // NOP
    // 0x168338: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168338u;
    {
        const bool branch_taken_0x168338 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x16833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168338u;
        // 0x16833c: 0x2442ffdc  addiu       $v0, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168338) {
            ctx->pc = 0x168328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168328;
        }
    }
    ctx->pc = 0x168340u;
    // 0x168340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16834c: 0x3e00008  jr          $ra
    ctx->pc = 0x16834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16834Cu;
        // 0x168350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168354u;
    // 0x168354: 0x0  nop
    ctx->pc = 0x168354u;
    // NOP
    ctx->pc = 0x168358u;
}
