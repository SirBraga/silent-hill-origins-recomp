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

// Function: sub_003094E0
// Address: 0x3094e0 - 0x3096c8
void sub_003094E0_0x3094e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003094E0_0x3094e0");
#endif

    ctx->pc = 0x3094e0u;

    // 0x3094e0: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3094e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3094e4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3094e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3094e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3094e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3094ec: 0x0  nop
    ctx->pc = 0x3094ecu;
    // NOP
    // 0x3094f0: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x3094F0u;
    {
        const bool branch_taken_0x3094f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3094F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094F0u;
        // 0x3094f4: 0x2482003c  addiu       $v0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094f0) {
            ctx->pc = 0x30969Cu;
            goto label_30969c;
        }
    }
    ctx->pc = 0x3094F8u;
    // 0x3094f8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3094f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3094fc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3094fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309504: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x309504u;
    {
        const bool branch_taken_0x309504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309504) {
            ctx->pc = 0x30969Cu;
            goto label_30969c;
        }
    }
    ctx->pc = 0x30950Cu;
    // 0x30950c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x30950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309510: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x309510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309518: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x309518u;
    {
        const bool branch_taken_0x309518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309518) {
            ctx->pc = 0x30969Cu;
            goto label_30969c;
        }
    }
    ctx->pc = 0x309520u;
    // 0x309520: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x309520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309524: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x309524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309528: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30952c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
    ctx->pc = 0x30952Cu;
    {
        const bool branch_taken_0x30952c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30952c) {
            ctx->pc = 0x30969Cu;
            goto label_30969c;
        }
    }
    ctx->pc = 0x309534u;
    // 0x309534: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x309534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309538: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x309538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30953c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30953cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309540: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x309540u;
    {
        const bool branch_taken_0x309540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309540) {
            ctx->pc = 0x30969Cu;
            goto label_30969c;
        }
    }
    ctx->pc = 0x309548u;
    // 0x309548: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x309548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30954c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x30954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309550: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309554: 0x0  nop
    ctx->pc = 0x309554u;
    // NOP
    // 0x309558: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x309558u;
    {
        const bool branch_taken_0x309558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309558u;
        // 0x30955c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309558) {
            ctx->pc = 0x309698u;
            goto label_309698;
        }
    }
    ctx->pc = 0x309560u;
    // 0x309560: 0xa4800036  sh          $zero, 0x36($a0)
    ctx->pc = 0x309560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x309564: 0xa0820035  sb          $v0, 0x35($a0)
    ctx->pc = 0x309564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x309568: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x309568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x30956c: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x30956cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x309570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309570u;
    {
        const bool branch_taken_0x309570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309570) {
            ctx->pc = 0x309580u;
            goto label_309580;
        }
    }
    ctx->pc = 0x309578u;
    // 0x309578: 0x90a2001c  lbu         $v0, 0x1C($a1)
    ctx->pc = 0x309578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x30957c: 0xa0820035  sb          $v0, 0x35($a0)
    ctx->pc = 0x30957cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 2));
label_309580:
    // 0x309580: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x309580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x309584: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x309584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x309588: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x309588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30958c: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x30958cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x309590: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x309590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x309594: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x309594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x309598: 0xb082000b  sdl         $v0, 0xB($a0)
    ctx->pc = 0x309598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30959c: 0xb4820004  sdr         $v0, 0x4($a0)
    ctx->pc = 0x30959cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095a0: 0xb0830013  sdl         $v1, 0x13($a0)
    ctx->pc = 0x3095a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095a4: 0xb483000c  sdr         $v1, 0xC($a0)
    ctx->pc = 0x3095a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095a8: 0xb088001b  sdl         $t0, 0x1B($a0)
    ctx->pc = 0x3095a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095ac: 0xb4880014  sdr         $t0, 0x14($a0)
    ctx->pc = 0x3095acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095b0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3095b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3095b4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3095b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3095b8: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x3095b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3095bc: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x3095bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3095c0: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x3095c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3095c4: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x3095c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3095c8: 0xb0830023  sdl         $v1, 0x23($a0)
    ctx->pc = 0x3095c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095cc: 0xb483001c  sdr         $v1, 0x1C($a0)
    ctx->pc = 0x3095ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095d0: 0xb086002b  sdl         $a2, 0x2B($a0)
    ctx->pc = 0x3095d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095d4: 0xb4860024  sdr         $a2, 0x24($a0)
    ctx->pc = 0x3095d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095d8: 0xb0880033  sdl         $t0, 0x33($a0)
    ctx->pc = 0x3095d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095dc: 0xb488002c  sdr         $t0, 0x2C($a0)
    ctx->pc = 0x3095dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3095e0: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x3095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x3095e4: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x3095e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x3095e8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3095e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3095ec: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3095ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3095f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3095f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3095f4: 0x0  nop
    ctx->pc = 0x3095f4u;
    // NOP
    // 0x3095f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3095F8u;
    {
        const bool branch_taken_0x3095f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3095FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095F8u;
        // 0x3095fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095f8) {
            ctx->pc = 0x309608u;
            goto label_309608;
        }
    }
    ctx->pc = 0x309600u;
    // 0x309600: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x309600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309604: 0x0  nop
    ctx->pc = 0x309604u;
    // NOP
label_309608:
    // 0x309608: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x309608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30960c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x30960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309614: 0x0  nop
    ctx->pc = 0x309614u;
    // NOP
    // 0x309618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x309618u;
    {
        const bool branch_taken_0x309618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309618u;
        // 0x30961c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309618) {
            ctx->pc = 0x309624u;
            goto label_309624;
        }
    }
    ctx->pc = 0x309620u;
    // 0x309620: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x309620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_309624:
    // 0x309624: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x309624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309628: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x309628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30962c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30962cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309630: 0x0  nop
    ctx->pc = 0x309630u;
    // NOP
    // 0x309634: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x309634u;
    {
        const bool branch_taken_0x309634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309634) {
            ctx->pc = 0x309638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309634u;
            // 0x309638: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30963Cu;
            goto label_30963c;
        }
    }
    ctx->pc = 0x30963Cu;
label_30963c:
    // 0x30963c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x30963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309640: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x309640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309648: 0x0  nop
    ctx->pc = 0x309648u;
    // NOP
    // 0x30964c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30964Cu;
    {
        const bool branch_taken_0x30964c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30964c) {
            ctx->pc = 0x309650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30964Cu;
            // 0x309650: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309654u;
            goto label_309654;
        }
    }
    ctx->pc = 0x309654u;
label_309654:
    // 0x309654: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x309654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309658: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x309658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30965c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30965cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309660: 0x0  nop
    ctx->pc = 0x309660u;
    // NOP
    // 0x309664: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x309664u;
    {
        const bool branch_taken_0x309664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309664) {
            ctx->pc = 0x309668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309664u;
            // 0x309668: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30966Cu;
            goto label_30966c;
        }
    }
    ctx->pc = 0x30966Cu;
label_30966c:
    // 0x30966c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x30966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309670: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x309670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309674: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x309674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309678: 0x0  nop
    ctx->pc = 0x309678u;
    // NOP
    // 0x30967c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30967Cu;
    {
        const bool branch_taken_0x30967c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30967Cu;
        // 0x309680: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30967c) {
            ctx->pc = 0x309688u;
            goto label_309688;
        }
    }
    ctx->pc = 0x309684u;
    // 0x309684: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x309684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_309688:
    // 0x309688: 0x24820044  addiu       $v0, $a0, 0x44
    ctx->pc = 0x309688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x30968c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x30968cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x309690: 0x3e00008  jr          $ra
    ctx->pc = 0x309690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309690u;
        // 0x309694: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309698u;
label_309698:
    // 0x309698: 0x2482003c  addiu       $v0, $a0, 0x3C
    ctx->pc = 0x309698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_30969c:
    // 0x30969c: 0x3e00008  jr          $ra
    ctx->pc = 0x30969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3096A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30969Cu;
        // 0x3096a0: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3096A4u;
    // 0x3096a4: 0x0  nop
    ctx->pc = 0x3096a4u;
    // NOP
    // 0x3096a8: 0xac8201c8  sw          $v0, 0x1C8($a0)
    ctx->pc = 0x3096a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 2));
    // 0x3096ac: 0x0  nop
    ctx->pc = 0x3096acu;
    // NOP
    // 0x3096b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3096b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3096b4: 0x0  nop
    ctx->pc = 0x3096b4u;
    // NOP
    // 0x3096b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3096b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3096bc: 0x0  nop
    ctx->pc = 0x3096bcu;
    // NOP
    // 0x3096c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3096c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3096c4: 0x0  nop
    ctx->pc = 0x3096c4u;
    // NOP
    ctx->pc = 0x3096c8u;
}
