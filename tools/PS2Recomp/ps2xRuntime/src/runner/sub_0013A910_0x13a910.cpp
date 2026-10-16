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

// Function: sub_0013A910
// Address: 0x13a910 - 0x13aa28
void sub_0013A910_0x13a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A910_0x13a910");
#endif

    switch (ctx->pc) {
        case 0x13a934u: goto label_13a934;
        case 0x13a944u: goto label_13a944;
        case 0x13a958u: goto label_13a958;
        case 0x13a980u: goto label_13a980;
        case 0x13a9f8u: goto label_13a9f8;
        case 0x13aa00u: goto label_13aa00;
        case 0x13aa10u: goto label_13aa10;
        default: break;
    }

    ctx->pc = 0x13a910u;

    // 0x13a910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a914: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13a918: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13a91c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13a91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a920: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13a920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a92c: 0xc040688  jal         func_101A20
    ctx->pc = 0x13A92Cu;
    SET_GPR_U32(ctx, 31, 0x13A934u);
    ctx->pc = 0x13A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A92Cu;
    // 0x13a930: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x13A92Cu, 0x13A934u)) {
        return;
    }
    ctx->pc = 0x13A934u;
label_13a934:
    // 0x13a934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a93c: 0xc0406bc  jal         func_101AF0
    ctx->pc = 0x13A93Cu;
    SET_GPR_U32(ctx, 31, 0x13A944u);
    ctx->pc = 0x13A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A93Cu;
    // 0x13a940: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AF0u, 0x13A93Cu, 0x13A944u)) {
        return;
    }
    ctx->pc = 0x13A944u;
label_13a944:
    // 0x13a944: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x13a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13a948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a94c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a950: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x13A950u;
    SET_GPR_U32(ctx, 31, 0x13A958u);
    ctx->pc = 0x13A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A950u;
    // 0x13a954: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x13A950u, 0x13A958u)) {
        return;
    }
    ctx->pc = 0x13A958u;
label_13a958:
    // 0x13a958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a95c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x13a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13a960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13a964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a968: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13a968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a96c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x13a96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x13a970: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x13a970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x13a974: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x13a974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x13a978: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x13A978u;
    SET_GPR_U32(ctx, 31, 0x13A980u);
    ctx->pc = 0x13A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A978u;
    // 0x13a97c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13A978u, 0x13A980u)) {
        return;
    }
    ctx->pc = 0x13A980u;
label_13a980:
    // 0x13a980: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x13a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13a984: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x13a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a988: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x13a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a98c: 0xc6270028  lwc1        $f7, 0x28($s1)
    ctx->pc = 0x13a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x13a990: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x13a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a994: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x13a994u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13a998: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x13a998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13a99c: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x13a99cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x13a9a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x13a9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a9a4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x13a9a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x13a9a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13a9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x13a9ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x13a9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x13a9b0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x13a9b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x13a9b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13a9b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x13a9b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x13a9b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x13a9bc: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x13a9bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x13a9c0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x13a9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x13a9c4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x13a9c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x13a9c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13a9cc: 0x8c4445e0  lw          $a0, 0x45E0($v0)
    ctx->pc = 0x13a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B45E0u));
    // 0x13a9d0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x13a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x13a9d4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x13a9d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13a9dc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A9DCu;
    {
        const bool branch_taken_0x13a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9DCu;
        // 0x13a9e0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9dc) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A9E4u;
    // 0x13a9e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a9e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A9E8u;
    {
        const bool branch_taken_0x13a9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9e8) {
            ctx->pc = 0x13A9F8u;
            goto label_13a9f8;
        }
    }
    ctx->pc = 0x13A9F0u;
    // 0x13a9f0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x13A9F0u;
    SET_GPR_U32(ctx, 31, 0x13A9F8u);
    ctx->pc = 0x13A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9F0u;
    // 0x13a9f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13A9F0u, 0x13A9F8u)) {
        return;
    }
    ctx->pc = 0x13A9F8u;
label_13a9f8:
    // 0x13a9f8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x13A9F8u;
    SET_GPR_U32(ctx, 31, 0x13AA00u);
    ctx->pc = 0x13A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9F8u;
    // 0x13a9fc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13A9F8u, 0x13AA00u)) {
        return;
    }
    ctx->pc = 0x13AA00u;
label_13aa00:
    // 0x13aa00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13aa04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa08: 0xc092d94  jal         func_24B650
    ctx->pc = 0x13AA08u;
    SET_GPR_U32(ctx, 31, 0x13AA10u);
    ctx->pc = 0x13AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA08u;
    // 0x13aa0c: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x13AA08u, 0x13AA10u)) {
        return;
    }
    ctx->pc = 0x13AA10u;
label_13aa10:
    // 0x13aa10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13aa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13aa14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13aa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aa18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13aa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA1Cu;
        // 0x13aa20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AA24u;
    // 0x13aa24: 0x0  nop
    ctx->pc = 0x13aa24u;
    // NOP
    ctx->pc = 0x13aa28u;
}
