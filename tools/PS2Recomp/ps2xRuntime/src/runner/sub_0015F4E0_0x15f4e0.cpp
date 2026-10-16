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

// Function: sub_0015F4E0
// Address: 0x15f4e0 - 0x15f750
void sub_0015F4E0_0x15f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F4E0_0x15f4e0");
#endif

    switch (ctx->pc) {
        case 0x15f52cu: goto label_15f52c;
        case 0x15f544u: goto label_15f544;
        case 0x15f560u: goto label_15f560;
        case 0x15f568u: goto label_15f568;
        case 0x15f590u: goto label_15f590;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f61cu: goto label_15f61c;
        case 0x15f638u: goto label_15f638;
        case 0x15f658u: goto label_15f658;
        case 0x15f660u: goto label_15f660;
        case 0x15f688u: goto label_15f688;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f700u: goto label_15f700;
        case 0x15f71cu: goto label_15f71c;
        default: break;
    }

    ctx->pc = 0x15f4e0u;

    // 0x15f4e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15f4e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15f4e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15f4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15f4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f4fc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x15f4fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f500: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15f500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f504: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x15f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x15f508: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x15F508u;
    {
        const bool branch_taken_0x15f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F508u;
        // 0x15f50c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f508) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F510u;
    // 0x15f510: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15f514: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x15F514u;
    {
        const bool branch_taken_0x15f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F514u;
        // 0x15f518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f514) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F51Cu;
    // 0x15f51c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15f520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f524: 0xc080924  jal         func_202490
    ctx->pc = 0x15F524u;
    SET_GPR_U32(ctx, 31, 0x15F52Cu);
    ctx->pc = 0x15F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F524u;
    // 0x15f528: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15F524u, 0x15F52Cu)) {
        return;
    }
    ctx->pc = 0x15F52Cu;
label_15f52c:
    // 0x15f52c: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15f530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f534: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x15f534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x15f538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f53c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15F53Cu;
    SET_GPR_U32(ctx, 31, 0x15F544u);
    ctx->pc = 0x15F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F53Cu;
    // 0x15f540: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15F53Cu, 0x15F544u)) {
        return;
    }
    ctx->pc = 0x15F544u;
label_15f544:
    // 0x15f544: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15f548: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15F548u;
    {
        const bool branch_taken_0x15f548 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F548u;
        // 0x15f54c: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f548) {
            ctx->pc = 0x15F5E4u;
            goto label_15f5e4;
        }
    }
    ctx->pc = 0x15F550u;
    // 0x15f550: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x15f554: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15f554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f55c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15f55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15f560:
    // 0x15f560: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F560u;
    SET_GPR_U32(ctx, 31, 0x15F568u);
    ctx->pc = 0x15F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F560u;
    // 0x15f564: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F560u, 0x15F568u)) {
        return;
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f56c: 0x0  nop
    ctx->pc = 0x15f56cu;
    // NOP
    // 0x15f570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f574: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x15f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f578: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f57c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15f57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15f580: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15f580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15f584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f588: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F588u;
    SET_GPR_U32(ctx, 31, 0x15F590u);
    ctx->pc = 0x15F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F588u;
    // 0x15f58c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F588u, 0x15F590u)) {
        return;
    }
    ctx->pc = 0x15F590u;
label_15f590:
    // 0x15f590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f594: 0x0  nop
    ctx->pc = 0x15f594u;
    // NOP
    // 0x15f598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f59c: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x15f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f5a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f5a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f5a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f5a8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F5A8u;
    SET_GPR_U32(ctx, 31, 0x15F5B0u);
    ctx->pc = 0x15F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5A8u;
    // 0x15f5ac: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F5A8u, 0x15F5B0u)) {
        return;
    }
    ctx->pc = 0x15F5B0u;
label_15f5b0:
    // 0x15f5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5b4: 0x0  nop
    ctx->pc = 0x15f5b4u;
    // NOP
    // 0x15f5b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f5bc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x15f5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f5c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f5c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15f5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15f5c8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15f5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15f5cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f5d0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x15f5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15f5d4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x15f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15f5d8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15f5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f5dc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x15F5DCu;
    {
        const bool branch_taken_0x15f5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5DCu;
        // 0x15f5e0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5dc) {
            ctx->pc = 0x15F560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f560;
        }
    }
    ctx->pc = 0x15F5E4u;
label_15f5e4:
    // 0x15f5e4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15f5e8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15f5ec: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f5f0: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x15f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_15f5f4:
    // 0x15f5f4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15f5f8: 0x58800039  blezl       $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15F5F8u;
    {
        const bool branch_taken_0x15f5f8 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x15f5f8) {
            ctx->pc = 0x15F5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F5F8u;
            // 0x15f5fc: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F6E0u;
            goto label_15f6e0;
        }
    }
    ctx->pc = 0x15F600u;
    // 0x15f600: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x15f604: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x15F604u;
    {
        const bool branch_taken_0x15f604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F604u;
        // 0x15f608: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f604) {
            ctx->pc = 0x15F6E0u;
            goto label_15f6e0;
        }
    }
    ctx->pc = 0x15F60Cu;
    // 0x15f60c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x15F60Cu;
    {
        const bool branch_taken_0x15f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F60Cu;
        // 0x15f610: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f60c) {
            ctx->pc = 0x15F72Cu;
            goto label_15f72c;
        }
    }
    ctx->pc = 0x15F614u;
    // 0x15f614: 0xc080924  jal         func_202490
    ctx->pc = 0x15F614u;
    SET_GPR_U32(ctx, 31, 0x15F61Cu);
    ctx->pc = 0x15F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F614u;
    // 0x15f618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15F614u, 0x15F61Cu)) {
        return;
    }
    ctx->pc = 0x15F61Cu;
label_15f61c:
    // 0x15f61c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f620: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x15f620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15f624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f628: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x15f628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x15f62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f630: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15F630u;
    SET_GPR_U32(ctx, 31, 0x15F638u);
    ctx->pc = 0x15F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F630u;
    // 0x15f634: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15F630u, 0x15F638u)) {
        return;
    }
    ctx->pc = 0x15F638u;
label_15f638:
    // 0x15f638: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15f63c: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x15F63Cu;
    {
        const bool branch_taken_0x15f63c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F63Cu;
        // 0x15f640: 0x8e11006c  lw          $s1, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f63c) {
            ctx->pc = 0x15F6DCu;
            goto label_15f6dc;
        }
    }
    ctx->pc = 0x15F644u;
    // 0x15f644: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x15f648: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15f648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f64c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f650: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15f650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15f654: 0x0  nop
    ctx->pc = 0x15f654u;
    // NOP
label_15f658:
    // 0x15f658: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F658u;
    SET_GPR_U32(ctx, 31, 0x15F660u);
    ctx->pc = 0x15F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F658u;
    // 0x15f65c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F658u, 0x15F660u)) {
        return;
    }
    ctx->pc = 0x15F660u;
label_15f660:
    // 0x15f660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f664: 0x0  nop
    ctx->pc = 0x15f664u;
    // NOP
    // 0x15f668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f66c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x15f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f670: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f674: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15f674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15f678: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15f678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15f67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f680: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F680u;
    SET_GPR_U32(ctx, 31, 0x15F688u);
    ctx->pc = 0x15F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F680u;
    // 0x15f684: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F680u, 0x15F688u)) {
        return;
    }
    ctx->pc = 0x15F688u;
label_15f688:
    // 0x15f688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f68c: 0x0  nop
    ctx->pc = 0x15f68cu;
    // NOP
    // 0x15f690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f694: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x15f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f698: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f69c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f6a0: 0xc0c580c  jal         func_316030
    ctx->pc = 0x15F6A0u;
    SET_GPR_U32(ctx, 31, 0x15F6A8u);
    ctx->pc = 0x15F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F6A0u;
    // 0x15f6a4: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x15F6A0u, 0x15F6A8u)) {
        return;
    }
    ctx->pc = 0x15F6A8u;
label_15f6a8:
    // 0x15f6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f6ac: 0x0  nop
    ctx->pc = 0x15f6acu;
    // NOP
    // 0x15f6b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f6b4: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x15f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f6b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15f6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x15f6bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15f6bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15f6c0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15f6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15f6c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f6c8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x15f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15f6cc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15f6d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15f6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f6d4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x15F6D4u;
    {
        const bool branch_taken_0x15f6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6D4u;
        // 0x15f6d8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6d4) {
            ctx->pc = 0x15F658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f658;
        }
    }
    ctx->pc = 0x15F6DCu;
label_15f6dc:
    // 0x15f6dc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_15f6e0:
    // 0x15f6e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15F6E0u;
    {
        const bool branch_taken_0x15f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E0u;
        // 0x15f6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6e0) {
            ctx->pc = 0x15F72Cu;
            goto label_15f72c;
        }
    }
    ctx->pc = 0x15F6E8u;
    // 0x15f6e8: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x15f6ec: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15f6f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6f4: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x15f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f6f8: 0xc057dd4  jal         func_15F750
    ctx->pc = 0x15F6F8u;
    SET_GPR_U32(ctx, 31, 0x15F700u);
    ctx->pc = 0x15F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F6F8u;
    // 0x15f6fc: 0xc60d005c  lwc1        $f13, 0x5C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15F750u, 0x15F6F8u, 0x15F700u)) {
        return;
    }
    ctx->pc = 0x15F700u;
label_15f700:
    // 0x15f700: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x15f704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f708: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x15f70c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f710: 0xc60c0074  lwc1        $f12, 0x74($s0)
    ctx->pc = 0x15f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f714: 0xc057dd4  jal         func_15F750
    ctx->pc = 0x15F714u;
    SET_GPR_U32(ctx, 31, 0x15F71Cu);
    ctx->pc = 0x15F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F714u;
    // 0x15f718: 0xc60d0078  lwc1        $f13, 0x78($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15F750u, 0x15F714u, 0x15F71Cu)) {
        return;
    }
    ctx->pc = 0x15F71Cu;
label_15f71c:
    // 0x15f71c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x15f720: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x15f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15f724: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f728: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x15f728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_15f72c:
    // 0x15f72c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15f72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f730: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15f730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f738: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15f738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f740: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x15f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15f744: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f748: 0x3e00008  jr          $ra
    ctx->pc = 0x15F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F748u;
        // 0x15f74c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F750u;
}
