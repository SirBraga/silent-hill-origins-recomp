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

// Function: sub_0019F830
// Address: 0x19f830 - 0x19f9f0
void sub_0019F830_0x19f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F830_0x19f830");
#endif

    switch (ctx->pc) {
        case 0x19f890u: goto label_19f890;
        case 0x19f94cu: goto label_19f94c;
        case 0x19f9b4u: goto label_19f9b4;
        default: break;
    }

    ctx->pc = 0x19f830u;

    // 0x19f830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19f834: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x19f834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x19f838: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19f83c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19f840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19f840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f844: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19f848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f84c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19f850: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19f850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19f854: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19f858: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x19f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19f85c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f860: 0x8e24080c  lw          $a0, 0x80C($s1)
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2060)));
    // 0x19f864: 0x8e230804  lw          $v1, 0x804($s1)
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x19f868: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x19f868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19f86c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19f870: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f874: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x19f878: 0x18600053  blez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x19F878u;
    {
        const bool branch_taken_0x19f878 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F878u;
        // 0x19f87c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f878) {
            ctx->pc = 0x19F9C8u;
            goto label_19f9c8;
        }
    }
    ctx->pc = 0x19F880u;
    // 0x19f880: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
    // 0x19f884: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19f888: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f88c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x19f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19f890:
    // 0x19f890: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x19f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x19f894: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x19f894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19f898: 0xc622081c  lwc1        $f2, 0x81C($s1)
    ctx->pc = 0x19f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19f89c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f8a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x19f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f8a4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x19f8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f8a8: 0x0  nop
    ctx->pc = 0x19f8a8u;
    // NOP
    // 0x19f8ac: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x19F8ACu;
    {
        const bool branch_taken_0x19f8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f8ac) {
            ctx->pc = 0x19F8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8ACu;
            // 0x19f8b0: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F8B4u;
    // 0x19f8b4: 0xc6200820  lwc1        $f0, 0x820($s1)
    ctx->pc = 0x19f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f8b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19f8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f8bc: 0x0  nop
    ctx->pc = 0x19f8bcu;
    // NOP
    // 0x19f8c0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x19F8C0u;
    {
        const bool branch_taken_0x19f8c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f8c0) {
            ctx->pc = 0x19F8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8C0u;
            // 0x19f8c4: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F8DCu;
            goto label_19f8dc;
        }
    }
    ctx->pc = 0x19F8C8u;
    // 0x19f8c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x19f8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f8cc: 0x0  nop
    ctx->pc = 0x19f8ccu;
    // NOP
    // 0x19f8d0: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
    ctx->pc = 0x19F8D0u;
    {
        const bool branch_taken_0x19f8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f8d0) {
            ctx->pc = 0x19F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8D0u;
            // 0x19f8d4: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F8D8u;
    // 0x19f8d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x19f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f8dc:
    // 0x19f8dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x19f8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19f8e0: 0x0  nop
    ctx->pc = 0x19f8e0u;
    // NOP
    // 0x19f8e4: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x19f8e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f8e8: 0x0  nop
    ctx->pc = 0x19f8e8u;
    // NOP
    // 0x19f8ec: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x19F8ECu;
    {
        const bool branch_taken_0x19f8ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f8ec) {
            ctx->pc = 0x19F8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8ECu;
            // 0x19f8f0: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F954u;
            goto label_19f954;
        }
    }
    ctx->pc = 0x19F8F4u;
    // 0x19f8f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f8f8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x19f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x19f8fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19f8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19f900: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x19f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f904: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x19f904u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f908: 0x0  nop
    ctx->pc = 0x19f908u;
    // NOP
    // 0x19f90c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x19F90Cu;
    {
        const bool branch_taken_0x19f90c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f90c) {
            ctx->pc = 0x19F910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F90Cu;
            // 0x19f910: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F920u;
            goto label_19f920;
        }
    }
    ctx->pc = 0x19F914u;
    // 0x19f914: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x19f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x19f918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F918u;
    {
        const bool branch_taken_0x19f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F918u;
        // 0x19f91c: 0x2442bdc8  addiu       $v0, $v0, -0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f918) {
            ctx->pc = 0x19F924u;
            goto label_19f924;
        }
    }
    ctx->pc = 0x19F920u;
label_19f920:
    // 0x19f920: 0x2442bdd0  addiu       $v0, $v0, -0x4230
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950352));
label_19f924:
    // 0x19f924: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f928: 0x8ec21a70  lw          $v0, 0x1A70($s6)
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6768)));
    // 0x19f92c: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19F92Cu;
    {
        const bool branch_taken_0x19f92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f92c) {
            ctx->pc = 0x19F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F92Cu;
            // 0x19f930: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F934u;
    // 0x19f934: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f938: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F938u;
    {
        const bool branch_taken_0x19f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F938u;
        // 0x19f93c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f938) {
            ctx->pc = 0x19F9B4u;
            goto label_19f9b4;
        }
    }
    ctx->pc = 0x19F940u;
    // 0x19f940: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19f940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x19f944: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19F944u;
    SET_GPR_U32(ctx, 31, 0x19F94Cu);
    ctx->pc = 0x19F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F944u;
    // 0x19f948: 0xae9d0004  sw          $sp, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19F944u, 0x19F94Cu)) {
        return;
    }
    ctx->pc = 0x19F94Cu;
label_19f94c:
    // 0x19f94c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19F94Cu;
    {
        const bool branch_taken_0x19f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F94Cu;
        // 0x19f950: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f94c) {
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F954u;
label_19f954:
    // 0x19f954: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x19f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f958: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x19f958u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19f95c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19f95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19f960: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x19f960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19f964: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x19f964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x19f968: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x19f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f96c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x19f96cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f970: 0x0  nop
    ctx->pc = 0x19f970u;
    // NOP
    // 0x19f974: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x19F974u;
    {
        const bool branch_taken_0x19f974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f974) {
            ctx->pc = 0x19F978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F974u;
            // 0x19f978: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F988u;
            goto label_19f988;
        }
    }
    ctx->pc = 0x19F97Cu;
    // 0x19f97c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x19f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x19f980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F980u;
    {
        const bool branch_taken_0x19f980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F980u;
        // 0x19f984: 0x2442bdb8  addiu       $v0, $v0, -0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f980) {
            ctx->pc = 0x19F98Cu;
            goto label_19f98c;
        }
    }
    ctx->pc = 0x19F988u;
label_19f988:
    // 0x19f988: 0x2442bdc0  addiu       $v0, $v0, -0x4240
    ctx->pc = 0x19f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
label_19f98c:
    // 0x19f98c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f990: 0x8ec21a70  lw          $v0, 0x1A70($s6)
    ctx->pc = 0x19f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6768)));
    // 0x19f994: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F994u;
    {
        const bool branch_taken_0x19f994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f994) {
            ctx->pc = 0x19F998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F994u;
            // 0x19f998: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F9B8u;
            goto label_19f9b8;
        }
    }
    ctx->pc = 0x19F99Cu;
    // 0x19f99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f9a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F9A0u;
    {
        const bool branch_taken_0x19f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A0u;
        // 0x19f9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9a0) {
            ctx->pc = 0x19F9B4u;
            goto label_19f9b4;
        }
    }
    ctx->pc = 0x19F9A8u;
    // 0x19f9a8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x19f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x19f9ac: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19F9ACu;
    SET_GPR_U32(ctx, 31, 0x19F9B4u);
    ctx->pc = 0x19F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9ACu;
    // 0x19f9b0: 0xae7d0004  sw          $sp, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19F9ACu, 0x19F9B4u)) {
        return;
    }
    ctx->pc = 0x19F9B4u;
label_19f9b4:
    // 0x19f9b4: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x19f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_19f9b8:
    // 0x19f9b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f9bc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19f9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f9c0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x19F9C0u;
    {
        const bool branch_taken_0x19f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9C0u;
        // 0x19f9c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9c0) {
            ctx->pc = 0x19F890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f890;
        }
    }
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19f9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f9cc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19f9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f9d0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19f9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f9d4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19f9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f9d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19f9d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f9dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f9dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f9e0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19f9e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f9e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9E8u;
        // 0x19f9ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F9F0u;
}
