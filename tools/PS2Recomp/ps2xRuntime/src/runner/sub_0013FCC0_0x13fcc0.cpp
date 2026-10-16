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

// Function: sub_0013FCC0
// Address: 0x13fcc0 - 0x13fde0
void sub_0013FCC0_0x13fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FCC0_0x13fcc0");
#endif

    switch (ctx->pc) {
        case 0x13fcdcu: goto label_13fcdc;
        case 0x13fcfcu: goto label_13fcfc;
        case 0x13fd14u: goto label_13fd14;
        case 0x13fd28u: goto label_13fd28;
        case 0x13fd34u: goto label_13fd34;
        case 0x13fd74u: goto label_13fd74;
        case 0x13fd84u: goto label_13fd84;
        case 0x13fd90u: goto label_13fd90;
        case 0x13fdc0u: goto label_13fdc0;
        case 0x13fdc8u: goto label_13fdc8;
        default: break;
    }

    ctx->pc = 0x13fcc0u;

    // 0x13fcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13fcc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13fcc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13fccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fcd4: 0xc095e0c  jal         func_257830
    ctx->pc = 0x13FCD4u;
    SET_GPR_U32(ctx, 31, 0x13FCDCu);
    ctx->pc = 0x13FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCD4u;
    // 0x13fcd8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x13FCD4u, 0x13FCDCu)) {
        return;
    }
    ctx->pc = 0x13FCDCu;
label_13fcdc:
    // 0x13fcdc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fce0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fce4: 0x50910007  beql        $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FCE4u;
    {
        const bool branch_taken_0x13fce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x13fce4) {
            ctx->pc = 0x13FCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FCE4u;
            // 0x13fce8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD04u;
            goto label_13fd04;
        }
    }
    ctx->pc = 0x13FCECu;
    // 0x13fcec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FCECu;
    {
        const bool branch_taken_0x13fcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcec) {
            ctx->pc = 0x13FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FCECu;
            // 0x13fcf0: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCF4u;
    // 0x13fcf4: 0xc076ace  jal         func_1DAB38
    ctx->pc = 0x13FCF4u;
    SET_GPR_U32(ctx, 31, 0x13FCFCu);
    ctx->pc = 0x1DAB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAB38u, 0x13FCF4u, 0x13FCFCu)) {
        return;
    }
    ctx->pc = 0x13FCFCu;
label_13fcfc:
    // 0x13fcfc: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x13fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_13fd00:
    // 0x13fd00: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_13fd04:
    // 0x13fd04: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x13FD04u;
    {
        const bool branch_taken_0x13fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd04) {
            ctx->pc = 0x13FD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD04u;
            // 0x13fd08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FD0Cu;
    // 0x13fd0c: 0xc089892  jal         func_226248
    ctx->pc = 0x13FD0Cu;
    SET_GPR_U32(ctx, 31, 0x13FD14u);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x13FD0Cu, 0x13FD14u)) {
        return;
    }
    ctx->pc = 0x13FD14u;
label_13fd14:
    // 0x13fd14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd18: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x13FD18u;
    {
        const bool branch_taken_0x13fd18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd18) {
            ctx->pc = 0x13FDC0u;
            goto label_13fdc0;
        }
    }
    ctx->pc = 0x13FD20u;
    // 0x13fd20: 0xc089a04  jal         func_226810
    ctx->pc = 0x13FD20u;
    SET_GPR_U32(ctx, 31, 0x13FD28u);
    ctx->pc = 0x13FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD20u;
    // 0x13fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x13FD20u, 0x13FD28u)) {
        return;
    }
    ctx->pc = 0x13FD28u;
label_13fd28:
    // 0x13fd28: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fd2c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x13FD2Cu;
    SET_GPR_U32(ctx, 31, 0x13FD34u);
    ctx->pc = 0x13FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD2Cu;
    // 0x13fd30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x13FD2Cu, 0x13FD34u)) {
        return;
    }
    ctx->pc = 0x13FD34u;
label_13fd34:
    // 0x13fd34: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fd38: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13fd3c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x13fd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x13fd40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13fd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13fd44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13fd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd48: 0x244709e0  addiu       $a3, $v0, 0x9E0
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2528));
    // 0x13fd4c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13fd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13fd50: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13fd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13fd54: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x13fd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13fd58: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x13fd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13fd5c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x13fd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fd60: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x13fd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fd64: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x13fd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fd68: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x13fd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13fd6c: 0xc095d54  jal         func_257550
    ctx->pc = 0x13FD6Cu;
    SET_GPR_U32(ctx, 31, 0x13FD74u);
    ctx->pc = 0x257550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257550u, 0x13FD6Cu, 0x13FD74u)) {
        return;
    }
    ctx->pc = 0x13FD74u;
label_13fd74:
    // 0x13fd74: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x13fd78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13fd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd7c: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x13FD7Cu;
    SET_GPR_U32(ctx, 31, 0x13FD84u);
    ctx->pc = 0x13FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD7Cu;
    // 0x13fd80: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x13FD7Cu, 0x13FD84u)) {
        return;
    }
    ctx->pc = 0x13FD84u;
label_13fd84:
    // 0x13fd84: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fd88: 0xc095c4a  jal         func_257128
    ctx->pc = 0x13FD88u;
    SET_GPR_U32(ctx, 31, 0x13FD90u);
    ctx->pc = 0x13FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD88u;
    // 0x13fd8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x13FD88u, 0x13FD90u)) {
        return;
    }
    ctx->pc = 0x13FD90u;
label_13fd90:
    // 0x13fd90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fd94: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fd98: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x13fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x13fd9c: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x13fd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13fda0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x13fda0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x13fda4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13fda8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FDA8u;
    {
        const bool branch_taken_0x13fda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDA8u;
        // 0x13fdac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fda8) {
            ctx->pc = 0x13FDC0u;
            goto label_13fdc0;
        }
    }
    ctx->pc = 0x13FDB0u;
    // 0x13fdb0: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x13fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fdb4: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x13fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x13fdb8: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x13FDB8u;
    SET_GPR_U32(ctx, 31, 0x13FDC0u);
    ctx->pc = 0x13FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDB8u;
    // 0x13fdbc: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAA8u, 0x13FDB8u, 0x13FDC0u)) {
        return;
    }
    ctx->pc = 0x13FDC0u;
label_13fdc0:
    // 0x13fdc0: 0xc050430  jal         func_1410C0
    ctx->pc = 0x13FDC0u;
    SET_GPR_U32(ctx, 31, 0x13FDC8u);
    ctx->pc = 0x13FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDC0u;
    // 0x13fdc4: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1410C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1410C0u, 0x13FDC0u, 0x13FDC8u)) {
        return;
    }
    ctx->pc = 0x13FDC8u;
label_13fdc8:
    // 0x13fdc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13fdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13fdcc:
    // 0x13fdcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13fdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fdd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13fdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDD4u;
        // 0x13fdd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FDDCu;
    // 0x13fddc: 0x0  nop
    ctx->pc = 0x13fddcu;
    // NOP
    ctx->pc = 0x13fde0u;
}
