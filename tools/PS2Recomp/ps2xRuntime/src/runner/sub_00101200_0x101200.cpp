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

// Function: sub_00101200
// Address: 0x101200 - 0x1015b8
void sub_00101200_0x101200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101200_0x101200");
#endif

    switch (ctx->pc) {
        case 0x101510u: goto label_101510;
        default: break;
    }

    ctx->pc = 0x101200u;

    // 0x101200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101204: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x101204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x101208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10120c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x101210: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101214: 0x262201f0  addiu       $v0, $s1, 0x1F0
    ctx->pc = 0x101214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x101218: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10121c: 0x26250200  addiu       $a1, $s1, 0x200
    ctx->pc = 0x10121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x101220: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101224: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x101224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x101228: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x101228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x10122c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x10122cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x101230: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x101230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x101234: 0x8e260180  lw          $a2, 0x180($s1)
    ctx->pc = 0x101234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101238: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x10123c: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x10123Cu;
    {
        const bool branch_taken_0x10123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10123c) {
            ctx->pc = 0x101240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10123Cu;
            // 0x101240: 0x8cc20030  lw          $v0, 0x30($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101344u;
            goto label_101344;
        }
    }
    ctx->pc = 0x101244u;
    // 0x101244: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x101248: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x101248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10124c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x101250: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x101254: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x101254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101258: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x10125c: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x10125Cu;
    {
        const bool branch_taken_0x10125c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10125c) {
            ctx->pc = 0x101310u;
            goto label_101310;
        }
    }
    ctx->pc = 0x101264u;
    // 0x101264: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x101264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x101268: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x101268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10126c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x101270: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x101270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101274: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x101274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101278: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x101278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x10127c: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101280: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x101284: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x101284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101288: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x101288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10128c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x10128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x101290: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x101290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x101294: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x101294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x101298: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x101298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x10129c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x10129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1012a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1012a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1012a4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1012a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1012a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1012a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1012ac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1012acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1012b0: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1012b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1012b4: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1012b8: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x1012b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1012bc: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x1012bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1012c0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1012c4: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x1012c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1012c8: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x1012c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1012cc: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1012ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1012d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1012d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1012d4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1012d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1012d8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1012d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1012dc: 0x8e2202ac  lw          $v0, 0x2AC($s1)
    ctx->pc = 0x1012dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x1012e0: 0x544000af  bnel        $v0, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x1012E0u;
    {
        const bool branch_taken_0x1012e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1012e0) {
            ctx->pc = 0x1012E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1012E0u;
            // 0x1012e4: 0xae2002ac  sw          $zero, 0x2AC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1015A0u;
            goto label_1015a0;
        }
    }
    ctx->pc = 0x1012E8u;
    // 0x1012e8: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1012ec: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1012ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1012f0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1012f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1012f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1012f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1012f8: 0xb22301f7  sdl         $v1, 0x1F7($s1)
    ctx->pc = 0x1012f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1012fc: 0xb62301f0  sdr         $v1, 0x1F0($s1)
    ctx->pc = 0x1012fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101300: 0xae2401f8  sw          $a0, 0x1F8($s1)
    ctx->pc = 0x101300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 4));
    // 0x101304: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x101304u;
    {
        const bool branch_taken_0x101304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101304u;
        // 0x101308: 0xae2002ac  sw          $zero, 0x2AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101304) {
            ctx->pc = 0x1015A0u;
            goto label_1015a0;
        }
    }
    ctx->pc = 0x10130Cu;
    // 0x10130c: 0x0  nop
    ctx->pc = 0x10130cu;
    // NOP
label_101310:
    // 0x101310: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x101310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x101314: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x101314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x101318: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x101318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x10131c: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101320: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x101320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x101324: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101328: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10132c: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101330: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x101334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101338: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10133c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x10133Cu;
    {
        const bool branch_taken_0x10133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10133c) {
            ctx->pc = 0x1015A0u;
            goto label_1015a0;
        }
    }
    ctx->pc = 0x101344u;
label_101344:
    // 0x101344: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x101344u;
    {
        const bool branch_taken_0x101344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101344) {
            ctx->pc = 0x101348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101344u;
            // 0x101348: 0x8cc20034  lw          $v0, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101468u;
            goto label_101468;
        }
    }
    ctx->pc = 0x10134Cu;
    // 0x10134c: 0x8e2201c8  lw          $v0, 0x1C8($s1)
    ctx->pc = 0x10134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x101350: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x101350u;
    {
        const bool branch_taken_0x101350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101350u;
        // 0x101354: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101350) {
            ctx->pc = 0x101410u;
            goto label_101410;
        }
    }
    ctx->pc = 0x101358u;
    // 0x101358: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x10135c: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x101360: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x101364: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x101364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101368: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x101368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x10136c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101370: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x101370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x101374: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x101374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x101378: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x101378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10137c: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x10137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101380: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x101380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101384: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x101384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x101388: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x10138c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x10138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x101390: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x101390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101394: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x101394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101398: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x101398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10139c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10139cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1013a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1013a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1013a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1013a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1013a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1013a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1013ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1013acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1013b0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1013b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1013b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1013b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1013b8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1013b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1013bc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1013bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1013c0: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1013c4: 0x6886001f  ldl         $a2, 0x1F($a0)
    ctx->pc = 0x1013c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1013c8: 0x6c860018  ldr         $a2, 0x18($a0)
    ctx->pc = 0x1013c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1013cc: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x1013ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1013d0: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x1013d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1013d4: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x1013d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1013d8: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x1013d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x1013dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1013dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1013e0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1013e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1013e4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1013e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1013e8: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1013e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1013ec: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x1013ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1013f0: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x1013f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1013f4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1013f8: 0xb2260207  sdl         $a2, 0x207($s1)
    ctx->pc = 0x1013f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1013fc: 0xb6260200  sdr         $a2, 0x200($s1)
    ctx->pc = 0x1013fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101400: 0xae270208  sw          $a3, 0x208($s1)
    ctx->pc = 0x101400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 7));
    // 0x101404: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x101404u;
    {
        const bool branch_taken_0x101404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101404u;
        // 0x101408: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101404) {
            ctx->pc = 0x1015A8u;
            goto label_1015a8;
        }
    }
    ctx->pc = 0x10140Cu;
    // 0x10140c: 0x0  nop
    ctx->pc = 0x10140cu;
    // NOP
label_101410:
    // 0x101410: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x101410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x101414: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x101414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x101418: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x101418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10141c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10141cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101420: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x101424: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101428: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x101428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x10142c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x10142cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x101430: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x101430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x101434: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x101434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x101438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10143c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10143cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101440: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101444: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101448: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x101448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10144c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10144cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101450: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101454: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x101454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x101458: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x101458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x10145c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x10145cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x101460: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x101460u;
    {
        const bool branch_taken_0x101460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101460u;
        // 0x101464: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101460) {
            ctx->pc = 0x1015A0u;
            goto label_1015a0;
        }
    }
    ctx->pc = 0x101468u;
label_101468:
    // 0x101468: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x101468u;
    {
        const bool branch_taken_0x101468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101468u;
        // 0x10146c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101468) {
            ctx->pc = 0x1015A4u;
            goto label_1015a4;
        }
    }
    ctx->pc = 0x101470u;
    // 0x101470: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x101474: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x101474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x101478: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x101478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10147c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10147cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101480: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x101480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x101484: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x101484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101488: 0x6a05001f  ldl         $a1, 0x1F($s0)
    ctx->pc = 0x101488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10148c: 0x6e050018  ldr         $a1, 0x18($s0)
    ctx->pc = 0x10148cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x101490: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x101490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101494: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x101494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101498: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x101498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10149c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x10149cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1014a0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1014a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1014a4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1014a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1014a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1014a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1014ac: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1014acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1014b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1014b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1014b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1014b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1014b8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1014b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1014bc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1014bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1014c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1014c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1014c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1014c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1014c8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1014c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1014cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1014ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1014d0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1014d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1014d4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1014d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1014d8: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1014dc: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x1014dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1014e0: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x1014e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1014e4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1014e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1014e8: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x1014e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1014ec: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x1014ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1014f0: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1014f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1014f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1014f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1014f8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1014f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1014fc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1014fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x101500: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101504: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x101504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x101508: 0xc0a4d14  jal         func_293450
    ctx->pc = 0x101508u;
    SET_GPR_U32(ctx, 31, 0x101510u);
    ctx->pc = 0x10150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101508u;
    // 0x10150c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293450u, 0x101508u, 0x101510u)) {
        return;
    }
    ctx->pc = 0x101510u;
label_101510:
    // 0x101510: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x101510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x101514: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x101514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101518: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x101518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10151c: 0x0  nop
    ctx->pc = 0x10151cu;
    // NOP
    // 0x101520: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x101520u;
    {
        const bool branch_taken_0x101520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x101524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101520u;
        // 0x101524: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101520) {
            ctx->pc = 0x101540u;
            goto label_101540;
        }
    }
    ctx->pc = 0x101528u;
    // 0x101528: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x10152c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10152cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101530: 0x0  nop
    ctx->pc = 0x101530u;
    // NOP
    // 0x101534: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x101534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x101538: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x101538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10153c: 0x0  nop
    ctx->pc = 0x10153cu;
    // NOP
label_101540:
    // 0x101540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101548: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x101548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10154c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x10154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x101550: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x101550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x101554: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x101554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x101558: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x101558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x10155c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x10155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101560: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x101560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101564: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x101564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x101568: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x101568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x10156c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x10156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101570: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x101574: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x101574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x101578: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x101578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x10157c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x10157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101580: 0xe62002b0  swc1        $f0, 0x2B0($s1)
    ctx->pc = 0x101580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
    // 0x101584: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x101584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x101588: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x101588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10158c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x101590: 0xb22201f7  sdl         $v0, 0x1F7($s1)
    ctx->pc = 0x101590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101594: 0xb62201f0  sdr         $v0, 0x1F0($s1)
    ctx->pc = 0x101594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101598: 0xae2401f8  sw          $a0, 0x1F8($s1)
    ctx->pc = 0x101598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 4));
    // 0x10159c: 0x0  nop
    ctx->pc = 0x10159cu;
    // NOP
label_1015a0:
    // 0x1015a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1015a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1015a4:
    // 0x1015a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1015a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1015a8:
    // 0x1015a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1015a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1015ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1015ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1015B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015ACu;
        // 0x1015b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1015ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1015B4u;
    // 0x1015b4: 0x0  nop
    ctx->pc = 0x1015b4u;
    // NOP
    ctx->pc = 0x1015b8u;
}
