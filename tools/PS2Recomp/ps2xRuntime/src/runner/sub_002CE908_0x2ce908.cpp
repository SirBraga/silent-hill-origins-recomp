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

// Function: sub_002CE908
// Address: 0x2ce908 - 0x2cec78
void sub_002CE908_0x2ce908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE908_0x2ce908");
#endif

    switch (ctx->pc) {
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2cea78u: goto label_2cea78;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2cebecu: goto label_2cebec;
        default: break;
    }

    ctx->pc = 0x2ce908u;

    // 0x2ce908: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ce908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ce90c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ce90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ce910: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ce910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ce914: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ce914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce918: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ce918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ce91c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ce91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce920: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ce920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ce924: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2ce924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce928: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2ce928u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ce92c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ce92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce930: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ce930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ce934: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2ce934u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ce938: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2ce938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ce93c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ce93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ce940: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2ce940u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ce944: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ce944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ce948: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2ce948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2ce94c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2ce94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2ce950: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x2ce950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2ce954: 0x90a20039  lbu         $v0, 0x39($a1)
    ctx->pc = 0x2ce954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
    // 0x2ce958: 0x90c30039  lbu         $v1, 0x39($a2)
    ctx->pc = 0x2ce958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2ce95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce960: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CE960u;
    {
        const bool branch_taken_0x2ce960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE960u;
        // 0x2ce964: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce960) {
            ctx->pc = 0x2CE9F0u;
            goto label_2ce9f0;
        }
    }
    ctx->pc = 0x2CE968u;
    // 0x2ce968: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ce968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ce96c: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x2ce96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ce970: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ce970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce974: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2ce974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ce978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ce97c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ce97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ce980: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2ce980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce984: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2ce984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce988: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ce988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ce98c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2ce98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2ce990: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2ce990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce994: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x2ce994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce998: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ce998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ce99c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2ce99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ce9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9a4: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2CE9A4u;
    SET_GPR_U32(ctx, 31, 0x2CE9ACu);
    ctx->pc = 0x2CE9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9A4u;
    // 0x2ce9a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CE9A4u, 0x2CE9ACu)) {
        return;
    }
    ctx->pc = 0x2CE9ACu;
label_2ce9ac:
    // 0x2ce9ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ce9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ce9b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ce9b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce9b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2ce9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce9b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ce9bc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2ce9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce9c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ce9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce9c4: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x2ce9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce9c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ce9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ce9cc: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x2ce9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce9d0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ce9d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ce9d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ce9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce9d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ce9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ce9dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ce9dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ce9e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ce9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce9e4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2CE9E4u;
    {
        const bool branch_taken_0x2ce9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9E4u;
        // 0x2ce9e8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9e4) {
            ctx->pc = 0x2CEBF0u;
            goto label_2cebf0;
        }
    }
    ctx->pc = 0x2CE9ECu;
    // 0x2ce9ec: 0x0  nop
    ctx->pc = 0x2ce9ecu;
    // NOP
label_2ce9f0:
    // 0x2ce9f0: 0x90a20038  lbu         $v0, 0x38($a1)
    ctx->pc = 0x2ce9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ce9f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce9f8: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CE9F8u;
    {
        const bool branch_taken_0x2ce9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce9f8) {
            ctx->pc = 0x2CE9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE9F8u;
            // 0x2ce9fc: 0x90c20038  lbu         $v0, 0x38($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEAE8u;
            goto label_2ceae8;
        }
    }
    ctx->pc = 0x2CEA00u;
    // 0x2cea00: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cea04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2cea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2cea08: 0xc4553b68  lwc1        $f21, 0x3B68($v0)
    ctx->pc = 0x2cea08u;
    { uint32_t bits = FAST_READ32(0x6B3B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cea0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cea0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea10: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x2cea10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2cea14: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x2cea14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2cea18: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x2cea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2cea1c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2cea1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cea20: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2cea20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cea24: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2cea24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2cea28: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x2cea28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2cea2c: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2cea30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cea34: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x2cea34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2cea38: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cea3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2cea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2cea40: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2cea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cea44: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2cea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cea48: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2cea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cea4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2cea4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cea50: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x2cea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cea54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cea54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cea58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2cea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cea5c: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x2cea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2cea60: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2cea60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2cea64: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x2cea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2cea68: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2cea68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2cea6c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2cea6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2cea70: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2CEA70u;
    SET_GPR_U32(ctx, 31, 0x2CEA78u);
    ctx->pc = 0x2CEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA70u;
    // 0x2cea74: 0x4615a540  add.s       $f21, $f20, $f21 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CEA70u, 0x2CEA78u)) {
        return;
    }
    ctx->pc = 0x2CEA78u;
label_2cea78:
    // 0x2cea78: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2cea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cea7c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2cea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cea80: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x2cea80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x2cea84: 0x46141d41  sub.s       $f21, $f3, $f20
    ctx->pc = 0x2cea84u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x2cea88: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2cea88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cea8c: 0x0  nop
    ctx->pc = 0x2cea8cu;
    // NOP
    // 0x2cea90: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2CEA90u;
    {
        const bool branch_taken_0x2cea90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cea90) {
            ctx->pc = 0x2CEA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA90u;
            // 0x2cea94: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEABCu;
            goto label_2ceabc;
        }
    }
    ctx->pc = 0x2CEA98u;
    // 0x2cea98: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2cea98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cea9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cea9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ceaa0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2ceaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ceaa4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2ceaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ceaa8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ceaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ceaac: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2ceaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ceab0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2ceab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ceab4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2CEAB4u;
    {
        const bool branch_taken_0x2ceab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAB4u;
        // 0x2ceab8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceab4) {
            ctx->pc = 0x2CEBF0u;
            goto label_2cebf0;
        }
    }
    ctx->pc = 0x2CEABCu;
label_2ceabc:
    // 0x2ceabc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ceabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ceac0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ceac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ceac4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ceac4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ceac8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ceac8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ceacc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ceaccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2cead0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2cead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cead4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2cead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cead8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2cead8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ceadc: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2ceadcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2ceae0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2CEAE0u;
    {
        const bool branch_taken_0x2ceae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAE0u;
        // 0x2ceae4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceae0) {
            ctx->pc = 0x2CEBF0u;
            goto label_2cebf0;
        }
    }
    ctx->pc = 0x2CEAE8u;
label_2ceae8:
    // 0x2ceae8: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2CEAE8u;
    {
        const bool branch_taken_0x2ceae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAE8u;
        // 0x2ceaec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceae8) {
            ctx->pc = 0x2CEBE0u;
            goto label_2cebe0;
        }
    }
    ctx->pc = 0x2CEAF0u;
    // 0x2ceaf0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x2ceaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ceaf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2ceaf8: 0xc4403b68  lwc1        $f0, 0x3B68($v0)
    ctx->pc = 0x2ceaf8u;
    { uint32_t bits = FAST_READ32(0x6B3B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceafc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ceafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb00: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x2ceb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ceb04: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x2ceb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ceb08: 0x8c680028  lw          $t0, 0x28($v1)
    ctx->pc = 0x2ceb08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2ceb0c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x2ceb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ceb10: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x2ceb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ceb14: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2ceb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2ceb18: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ceb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ceb1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2ceb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ceb20: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2ceb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ceb24: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2ceb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ceb28: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ceb2c: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2CEB2Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB34u);
    ctx->pc = 0x2CEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB2Cu;
    // 0x2ceb30: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CEB2Cu, 0x2CEB34u)) {
        return;
    }
    ctx->pc = 0x2CEB34u;
label_2ceb34:
    // 0x2ceb34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ceb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ceb38: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2ceb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ceb3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ceb40: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x2ceb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ceb44: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ceb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceb48: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2ceb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ceb4c: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2ceb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2ceb50: 0xc7aa0008  lwc1        $f10, 0x8($sp)
    ctx->pc = 0x2ceb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2ceb54: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x2ceb54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x2ceb58: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2ceb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ceb5c: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x2ceb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ceb60: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2ceb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2ceb64: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x2ceb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ceb68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ceb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ceb6c: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x2ceb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ceb70: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2ceb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ceb74: 0x460101c0  add.s       $f7, $f0, $f1
    ctx->pc = 0x2ceb74u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ceb78: 0x46003846  mov.s       $f1, $f7
    ctx->pc = 0x2ceb78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[7]);
    // 0x2ceb7c: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x2ceb7cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2ceb80: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2ceb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2ceb84: 0x46033d41  sub.s       $f21, $f7, $f3
    ctx->pc = 0x2ceb84u;
    ctx->f[21] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x2ceb88: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x2ceb88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ceb8c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ceb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ceb90: 0x0  nop
    ctx->pc = 0x2ceb90u;
    // NOP
    // 0x2ceb94: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2CEB94u;
    {
        const bool branch_taken_0x2ceb94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ceb94) {
            ctx->pc = 0x2CEB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEB94u;
            // 0x2ceb98: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEBC0u;
            goto label_2cebc0;
        }
    }
    ctx->pc = 0x2CEB9Cu;
    // 0x2ceb9c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2ceb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ceba0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ceba0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ceba4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x2ceba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ceba8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x2ceba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2cebac: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x2cebacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cebb0: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x2cebb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cebb4: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x2cebb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cebb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CEBB8u;
    {
        const bool branch_taken_0x2cebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBB8u;
        // 0x2cebbc: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebb8) {
            ctx->pc = 0x2CEBF0u;
            goto label_2cebf0;
        }
    }
    ctx->pc = 0x2CEBC0u;
label_2cebc0:
    // 0x2cebc0: 0x46004847  neg.s       $f1, $f9
    ctx->pc = 0x2cebc0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[9]);
    // 0x2cebc4: 0x46005087  neg.s       $f2, $f10
    ctx->pc = 0x2cebc4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[10]);
    // 0x2cebc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2cebc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cebcc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2cebccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cebd0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2cebd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2cebd4: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x2cebd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x2cebd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEBD8u;
    {
        const bool branch_taken_0x2cebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBD8u;
        // 0x2cebdc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cebd8) {
            ctx->pc = 0x2CEBF0u;
            goto label_2cebf0;
        }
    }
    ctx->pc = 0x2CEBE0u;
label_2cebe0:
    // 0x2cebe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cebe4: 0xc0b30fa  jal         func_2CC3E8
    ctx->pc = 0x2CEBE4u;
    SET_GPR_U32(ctx, 31, 0x2CEBECu);
    ctx->pc = 0x2CEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBE4u;
    // 0x2cebe8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC3E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CC3E8u, 0x2CEBE4u, 0x2CEBECu)) {
        return;
    }
    ctx->pc = 0x2CEBECu;
label_2cebec:
    // 0x2cebec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cebecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cebf0:
    // 0x2cebf0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cebf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cebf8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2cebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cebfc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cec00: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2cec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cec04: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x2cec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cec08: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x2cec08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2cec0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cec0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cec10: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2cec10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cec14: 0x0  nop
    ctx->pc = 0x2cec14u;
    // NOP
    // 0x2cec18: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2CEC18u;
    {
        const bool branch_taken_0x2cec18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC18u;
        // 0x2cec1c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec18) {
            ctx->pc = 0x2CEC48u;
            goto label_2cec48;
        }
    }
    ctx->pc = 0x2CEC20u;
    // 0x2cec20: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2cec20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2cec24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cec28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cec2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cec2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cec30: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2cec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cec34: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2cec34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2cec38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cec38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cec3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cec3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cec40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEC40u;
    {
        const bool branch_taken_0x2cec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC40u;
        // 0x2cec44: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec40) {
            ctx->pc = 0x2CEC4Cu;
            goto label_2cec4c;
        }
    }
    ctx->pc = 0x2CEC48u;
label_2cec48:
    // 0x2cec48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cec4c:
    // 0x2cec4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2cec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cec50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2cec50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cec54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2cec54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cec58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2cec58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cec5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cec60: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2cec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cec64: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2cec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cec68: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2cec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cec6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC6Cu;
        // 0x2cec70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEC74u;
    // 0x2cec74: 0x0  nop
    ctx->pc = 0x2cec74u;
    // NOP
    ctx->pc = 0x2cec78u;
}
