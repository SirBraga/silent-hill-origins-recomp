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

// Function: sub_0017FD58
// Address: 0x17fd58 - 0x17ff20
void sub_0017FD58_0x17fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FD58_0x17fd58");
#endif

    switch (ctx->pc) {
        case 0x17fd6cu: goto label_17fd6c;
        case 0x17fd80u: goto label_17fd80;
        case 0x17fd98u: goto label_17fd98;
        case 0x17fefcu: goto label_17fefc;
        default: break;
    }

    ctx->pc = 0x17fd58u;

    // 0x17fd58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fd5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17fd60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fd64: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x17FD64u;
    SET_GPR_U32(ctx, 31, 0x17FD6Cu);
    ctx->pc = 0x17FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD64u;
    // 0x17fd68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x17FD64u, 0x17FD6Cu)) {
        return;
    }
    ctx->pc = 0x17FD6Cu;
label_17fd6c:
    // 0x17fd6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17fd70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd74: 0x8c46fa28  lw          $a2, -0x5D8($v0)
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BFA28u));
    // 0x17fd78: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17FD78u;
    SET_GPR_U32(ctx, 31, 0x17FD80u);
    ctx->pc = 0x17FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD78u;
    // 0x17fd7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17FD78u, 0x17FD80u)) {
        return;
    }
    ctx->pc = 0x17FD80u;
label_17fd80:
    // 0x17fd80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fd88: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x17FD88u;
    {
        const bool branch_taken_0x17fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD88u;
        // 0x17fd8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd88) {
            ctx->pc = 0x17FF10u;
            goto label_17ff10;
        }
    }
    ctx->pc = 0x17FD90u;
    // 0x17fd90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17fd98:
    // 0x17fd98: 0x2c83000e  sltiu       $v1, $a0, 0xE
    ctx->pc = 0x17fd98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x17fd9c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x17FD9Cu;
    {
        const bool branch_taken_0x17fd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD9Cu;
        // 0x17fda0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd9c) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FDA4u;
    // 0x17fda4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17fda8: 0x24427d20  addiu       $v0, $v0, 0x7D20
    ctx->pc = 0x17fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32032));
    // 0x17fdac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fdb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fdb4: 0x800008  jr          $a0
    ctx->pc = 0x17FDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FDBCu: goto label_17fdbc;
            case 0x17FDD0u: goto label_17fdd0;
            case 0x17FDE4u: goto label_17fde4;
            case 0x17FDF8u: goto label_17fdf8;
            case 0x17FE0Cu: goto label_17fe0c;
            case 0x17FE20u: goto label_17fe20;
            case 0x17FE34u: goto label_17fe34;
            case 0x17FE48u: goto label_17fe48;
            case 0x17FE5Cu: goto label_17fe5c;
            case 0x17FE70u: goto label_17fe70;
            case 0x17FE84u: goto label_17fe84;
            case 0x17FE98u: goto label_17fe98;
            case 0x17FEBCu: goto label_17febc;
            case 0x17FED0u: goto label_17fed0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FDB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17FDBCu;
label_17fdbc:
    // 0x17fdbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdc0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fdc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fdc8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x17FDC8u;
    {
        const bool branch_taken_0x17fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDC8u;
        // 0x17fdcc: 0xac834fc8  sw          $v1, 0x4FC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdc8) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FDD0u;
label_17fdd0:
    // 0x17fdd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdd4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fdd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fddc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x17FDDCu;
    {
        const bool branch_taken_0x17fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDDCu;
        // 0x17fde0: 0xac834fcc  sw          $v1, 0x4FCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fddc) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FDE4u;
label_17fde4:
    // 0x17fde4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fde8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fdec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fdf0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x17FDF0u;
    {
        const bool branch_taken_0x17fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDF0u;
        // 0x17fdf4: 0xac834fd0  sw          $v1, 0x4FD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdf0) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FDF8u;
label_17fdf8:
    // 0x17fdf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdfc: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fe00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fe04: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17FE04u;
    {
        const bool branch_taken_0x17fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE04u;
        // 0x17fe08: 0xac834fd4  sw          $v1, 0x4FD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe04) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE0Cu;
label_17fe0c:
    // 0x17fe0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe10: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fe14: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fe18: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x17FE18u;
    {
        const bool branch_taken_0x17fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE18u;
        // 0x17fe1c: 0xac834fd8  sw          $v1, 0x4FD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe18) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE20u;
label_17fe20:
    // 0x17fe20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe24: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17FE2Cu;
    {
        const bool branch_taken_0x17fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE2Cu;
        // 0x17fe30: 0xe4605048  swc1        $f0, 0x5048($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe2c) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE34u;
label_17fe34:
    // 0x17fe34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe38: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe40: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17FE40u;
    {
        const bool branch_taken_0x17fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE40u;
        // 0x17fe44: 0xe460504c  swc1        $f0, 0x504C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe40) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE48u;
label_17fe48:
    // 0x17fe48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe4c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17FE54u;
    {
        const bool branch_taken_0x17fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE54u;
        // 0x17fe58: 0xe4605050  swc1        $f0, 0x5050($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe54) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE5Cu;
label_17fe5c:
    // 0x17fe5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe60: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17FE68u;
    {
        const bool branch_taken_0x17fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE68u;
        // 0x17fe6c: 0xe4605054  swc1        $f0, 0x5054($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe68) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE70u;
label_17fe70:
    // 0x17fe70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe74: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17FE7Cu;
    {
        const bool branch_taken_0x17fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE7Cu;
        // 0x17fe80: 0xe4605058  swc1        $f0, 0x5058($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe7c) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE84u;
label_17fe84:
    // 0x17fe84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe88: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fe8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17FE90u;
    {
        const bool branch_taken_0x17fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE90u;
        // 0x17fe94: 0xe460505c  swc1        $f0, 0x505C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe90) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FE98u;
label_17fe98:
    // 0x17fe98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x17fea0: 0x24474128  addiu       $a3, $v0, 0x4128
    ctx->pc = 0x17fea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16680));
    // 0x17fea4: 0x8864000b  lwl         $a0, 0xB($v1)
    ctx->pc = 0x17fea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x17fea8: 0x98640008  lwr         $a0, 0x8($v1)
    ctx->pc = 0x17fea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x17feac: 0xa8e40003  swl         $a0, 0x3($a3)
    ctx->pc = 0x17feacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17feb0: 0xb8e40000  swr         $a0, 0x0($a3)
    ctx->pc = 0x17feb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17feb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17FEB4u;
    {
        const bool branch_taken_0x17feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB4u;
        // 0x17feb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17feb4) {
            ctx->pc = 0x17FEE4u;
            goto label_17fee4;
        }
    }
    ctx->pc = 0x17FEBCu;
label_17febc:
    // 0x17febc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fec0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x17fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x17fec4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FEC8u;
    {
        const bool branch_taken_0x17fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEC8u;
        // 0x17fecc: 0xe4605060  swc1        $f0, 0x5060($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fec8) {
            ctx->pc = 0x17FEE0u;
            goto label_17fee0;
        }
    }
    ctx->pc = 0x17FED0u;
label_17fed0:
    // 0x17fed0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fed4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17fed8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fedc: 0xac834fdc  sw          $v1, 0x4FDC($a0)
    ctx->pc = 0x17fedcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x734FDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x734FDCu, _value); } while (0);
label_17fee0:
    // 0x17fee0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17fee4:
    // 0x17fee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17feec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fef4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17FEF4u;
    SET_GPR_U32(ctx, 31, 0x17FEFCu);
    ctx->pc = 0x17FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEF4u;
    // 0x17fef8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17FEF4u, 0x17FEFCu)) {
        return;
    }
    ctx->pc = 0x17FEFCu;
label_17fefc:
    // 0x17fefc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ff00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff04: 0x5460ffa4  bnel        $v1, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x17FF04u;
    {
        const bool branch_taken_0x17ff04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ff04) {
            ctx->pc = 0x17FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FF04u;
            // 0x17ff08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fd98;
        }
    }
    ctx->pc = 0x17FF0Cu;
    // 0x17ff0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ff0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ff10:
    // 0x17ff10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ff14: 0x3e00008  jr          $ra
    ctx->pc = 0x17FF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF14u;
        // 0x17ff18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FF1Cu;
    // 0x17ff1c: 0x0  nop
    ctx->pc = 0x17ff1cu;
    // NOP
    ctx->pc = 0x17ff20u;
}
