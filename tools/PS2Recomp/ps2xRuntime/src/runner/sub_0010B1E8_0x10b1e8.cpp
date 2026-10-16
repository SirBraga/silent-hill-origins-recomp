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

// Function: sub_0010B1E8
// Address: 0x10b1e8 - 0x10b2f0
void sub_0010B1E8_0x10b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B1E8_0x10b1e8");
#endif

    switch (ctx->pc) {
        case 0x10b204u: goto label_10b204;
        case 0x10b21cu: goto label_10b21c;
        case 0x10b26cu: goto label_10b26c;
        case 0x10b288u: goto label_10b288;
        case 0x10b2d8u: goto label_10b2d8;
        default: break;
    }

    ctx->pc = 0x10b1e8u;

    // 0x10b1e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b1ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10b1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10b1f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10b1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10b1f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10b1fc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x10B1FCu;
    SET_GPR_U32(ctx, 31, 0x10B204u);
    ctx->pc = 0x10B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1FCu;
    // 0x10b200: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x10B1FCu, 0x10B204u)) {
        return;
    }
    ctx->pc = 0x10B204u;
label_10b204:
    // 0x10b204: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x10b204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10b208: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x10b20c: 0x5602001a  bnel        $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10B20Cu;
    {
        const bool branch_taken_0x10b20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b20c) {
            ctx->pc = 0x10B210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B20Cu;
            // 0x10b210: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B278u;
            goto label_10b278;
        }
    }
    ctx->pc = 0x10B214u;
    // 0x10b214: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B214u;
    SET_GPR_U32(ctx, 31, 0x10B21Cu);
    ctx->pc = 0x10B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B214u;
    // 0x10b218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B214u, 0x10B21Cu)) {
        return;
    }
    ctx->pc = 0x10B21Cu;
label_10b21c:
    // 0x10b21c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10b220: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b224: 0x8c6542d8  lw          $a1, 0x42D8($v1)
    ctx->pc = 0x10b224u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42D8u));
    // 0x10b228: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10b228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10b22c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10b230: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x10b230u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x10b234: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10b234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10b238: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10b238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10b23c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x10b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b240: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x10b240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b244: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x10b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b248: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x10b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x10b24c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10b250: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B250u;
    {
        const bool branch_taken_0x10b250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x10B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B250u;
        // 0x10b254: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b250) {
            ctx->pc = 0x10B26Cu;
            goto label_10b26c;
        }
    }
    ctx->pc = 0x10B258u;
    // 0x10b258: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b25c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B25Cu;
    {
        const bool branch_taken_0x10b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B25Cu;
        // 0x10b260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b25c) {
            ctx->pc = 0x10B270u;
            goto label_10b270;
        }
    }
    ctx->pc = 0x10B264u;
    // 0x10b264: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10B264u;
    SET_GPR_U32(ctx, 31, 0x10B26Cu);
    ctx->pc = 0x10B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B264u;
    // 0x10b268: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10B264u, 0x10B26Cu)) {
        return;
    }
    ctx->pc = 0x10B26Cu;
label_10b26c:
    // 0x10b26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b270:
    // 0x10b270: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10B270u;
    {
        const bool branch_taken_0x10b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B270u;
        // 0x10b274: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b270) {
            ctx->pc = 0x10B2DCu;
            goto label_10b2dc;
        }
    }
    ctx->pc = 0x10B278u;
label_10b278:
    // 0x10b278: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10B278u;
    {
        const bool branch_taken_0x10b278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b278) {
            ctx->pc = 0x10B27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B278u;
            // 0x10b27c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B2E0u;
            goto label_10b2e0;
        }
    }
    ctx->pc = 0x10B280u;
    // 0x10b280: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x10B280u;
    SET_GPR_U32(ctx, 31, 0x10B288u);
    ctx->pc = 0x10B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B280u;
    // 0x10b284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x10B280u, 0x10B288u)) {
        return;
    }
    ctx->pc = 0x10B288u;
label_10b288:
    // 0x10b288: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10b28c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10b290: 0x8c6542e0  lw          $a1, 0x42E0($v1)
    ctx->pc = 0x10b290u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42E0u));
    // 0x10b294: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10b294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10b298: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10b29c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x10b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x10b2a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10b2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10b2a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10b2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10b2a8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x10b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10b2ac: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x10b2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b2b0: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x10b2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10b2b4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x10b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x10b2b8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b2bc: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B2BCu;
    {
        const bool branch_taken_0x10b2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x10B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2BCu;
        // 0x10b2c0: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2bc) {
            ctx->pc = 0x10B2D8u;
            goto label_10b2d8;
        }
    }
    ctx->pc = 0x10B2C4u;
    // 0x10b2c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10b2c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B2C8u;
    {
        const bool branch_taken_0x10b2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2c8) {
            ctx->pc = 0x10B2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B2C8u;
            // 0x10b2cc: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B2DCu;
            goto label_10b2dc;
        }
    }
    ctx->pc = 0x10B2D0u;
    // 0x10b2d0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x10B2D0u;
    SET_GPR_U32(ctx, 31, 0x10B2D8u);
    ctx->pc = 0x10B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2D0u;
    // 0x10b2d4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x10B2D0u, 0x10B2D8u)) {
        return;
    }
    ctx->pc = 0x10B2D8u;
label_10b2d8:
    // 0x10b2d8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x10b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_10b2dc:
    // 0x10b2dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10b2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10b2e0:
    // 0x10b2e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10b2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2E8u;
        // 0x10b2ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B2F0u;
}
