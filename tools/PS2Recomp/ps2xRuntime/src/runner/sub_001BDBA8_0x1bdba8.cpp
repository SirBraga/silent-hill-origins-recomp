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

// Function: sub_001BDBA8
// Address: 0x1bdba8 - 0x1bdce8
void sub_001BDBA8_0x1bdba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDBA8_0x1bdba8");
#endif

    switch (ctx->pc) {
        case 0x1bdba8u: goto label_1bdba8;
        case 0x1bdbacu: goto label_1bdbac;
        case 0x1bdbb0u: goto label_1bdbb0;
        case 0x1bdbb4u: goto label_1bdbb4;
        case 0x1bdbb8u: goto label_1bdbb8;
        case 0x1bdbbcu: goto label_1bdbbc;
        case 0x1bdbc0u: goto label_1bdbc0;
        case 0x1bdbc4u: goto label_1bdbc4;
        case 0x1bdbc8u: goto label_1bdbc8;
        case 0x1bdbccu: goto label_1bdbcc;
        case 0x1bdbd0u: goto label_1bdbd0;
        case 0x1bdbd4u: goto label_1bdbd4;
        case 0x1bdbd8u: goto label_1bdbd8;
        case 0x1bdbdcu: goto label_1bdbdc;
        case 0x1bdbe0u: goto label_1bdbe0;
        case 0x1bdbe4u: goto label_1bdbe4;
        case 0x1bdbe8u: goto label_1bdbe8;
        case 0x1bdbecu: goto label_1bdbec;
        case 0x1bdbf0u: goto label_1bdbf0;
        case 0x1bdbf4u: goto label_1bdbf4;
        case 0x1bdbf8u: goto label_1bdbf8;
        case 0x1bdbfcu: goto label_1bdbfc;
        case 0x1bdc00u: goto label_1bdc00;
        case 0x1bdc04u: goto label_1bdc04;
        case 0x1bdc08u: goto label_1bdc08;
        case 0x1bdc0cu: goto label_1bdc0c;
        case 0x1bdc10u: goto label_1bdc10;
        case 0x1bdc14u: goto label_1bdc14;
        case 0x1bdc18u: goto label_1bdc18;
        case 0x1bdc1cu: goto label_1bdc1c;
        case 0x1bdc20u: goto label_1bdc20;
        case 0x1bdc24u: goto label_1bdc24;
        case 0x1bdc28u: goto label_1bdc28;
        case 0x1bdc2cu: goto label_1bdc2c;
        case 0x1bdc30u: goto label_1bdc30;
        case 0x1bdc34u: goto label_1bdc34;
        case 0x1bdc38u: goto label_1bdc38;
        case 0x1bdc3cu: goto label_1bdc3c;
        case 0x1bdc40u: goto label_1bdc40;
        case 0x1bdc44u: goto label_1bdc44;
        case 0x1bdc48u: goto label_1bdc48;
        case 0x1bdc4cu: goto label_1bdc4c;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc54u: goto label_1bdc54;
        case 0x1bdc58u: goto label_1bdc58;
        case 0x1bdc5cu: goto label_1bdc5c;
        case 0x1bdc60u: goto label_1bdc60;
        case 0x1bdc64u: goto label_1bdc64;
        case 0x1bdc68u: goto label_1bdc68;
        case 0x1bdc6cu: goto label_1bdc6c;
        case 0x1bdc70u: goto label_1bdc70;
        case 0x1bdc74u: goto label_1bdc74;
        case 0x1bdc78u: goto label_1bdc78;
        case 0x1bdc7cu: goto label_1bdc7c;
        case 0x1bdc80u: goto label_1bdc80;
        case 0x1bdc84u: goto label_1bdc84;
        case 0x1bdc88u: goto label_1bdc88;
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdc90u: goto label_1bdc90;
        case 0x1bdc94u: goto label_1bdc94;
        case 0x1bdc98u: goto label_1bdc98;
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdca4u: goto label_1bdca4;
        case 0x1bdca8u: goto label_1bdca8;
        case 0x1bdcacu: goto label_1bdcac;
        case 0x1bdcb0u: goto label_1bdcb0;
        case 0x1bdcb4u: goto label_1bdcb4;
        case 0x1bdcb8u: goto label_1bdcb8;
        case 0x1bdcbcu: goto label_1bdcbc;
        case 0x1bdcc0u: goto label_1bdcc0;
        case 0x1bdcc4u: goto label_1bdcc4;
        case 0x1bdcc8u: goto label_1bdcc8;
        case 0x1bdcccu: goto label_1bdccc;
        case 0x1bdcd0u: goto label_1bdcd0;
        case 0x1bdcd4u: goto label_1bdcd4;
        case 0x1bdcd8u: goto label_1bdcd8;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdce0u: goto label_1bdce0;
        case 0x1bdce4u: goto label_1bdce4;
        default: break;
    }

    ctx->pc = 0x1bdba8u;

label_1bdba8:
    // 0x1bdba8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1bdbac:
    // 0x1bdbac: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1bdbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1bdbb0:
    // 0x1bdbb0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1bdbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1bdbb4:
    // 0x1bdbb4: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1bdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1bdbb8:
    // 0x1bdbb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bdbbc:
    // 0x1bdbbc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1bdbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1bdbc0:
    // 0x1bdbc0: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1bdbc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1bdbc4:
    // 0x1bdbc4: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1bdbc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1bdbc8:
    // 0x1bdbc8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1bdbc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1bdbcc:
    // 0x1bdbcc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1bdbd0:
    // 0x1bdbd0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1bdbd4:
    if (ctx->pc == 0x1BDBD4u) {
        ctx->pc = 0x1BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBD0u;
        // 0x1bdbd4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBD8u;
        goto label_1bdbd8;
    }
    ctx->pc = 0x1BDBD0u;
    {
        const bool branch_taken_0x1bdbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBD0u;
        // 0x1bdbd4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbd0) {
            ctx->pc = 0x1BDCC4u;
            goto label_1bdcc4;
        }
    }
    ctx->pc = 0x1BDBD8u;
label_1bdbd8:
    // 0x1bdbd8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1bdbdc:
    // 0x1bdbdc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1bdbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1bdbe0:
    // 0x1bdbe0: 0x24520fd8  addiu       $s2, $v0, 0xFD8
    ctx->pc = 0x1bdbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1bdbe4:
    // 0x1bdbe4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bdbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bdbe8:
    // 0x1bdbe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bdbec:
    // 0x1bdbec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bdbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bdbf0:
    // 0x1bdbf0: 0x40f809  jalr        $v0
label_1bdbf4:
    if (ctx->pc == 0x1BDBF4u) {
        ctx->pc = 0x1BDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBF0u;
        // 0x1bdbf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBF8u;
        goto label_1bdbf8;
    }
    ctx->pc = 0x1BDBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDBF8u);
        ctx->pc = 0x1BDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBF0u;
        // 0x1bdbf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBF0u, 0x1BDBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDBF8u;
label_1bdbf8:
    // 0x1bdbf8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x1bdbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bdbfc:
    // 0x1bdbfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bdc00:
    // 0x1bdc00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdc04:
    // 0x1bdc04: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1bdc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1bdc08:
    // 0x1bdc08: 0x0  nop
    ctx->pc = 0x1bdc08u;
    // NOP
label_1bdc0c:
    // 0x1bdc0c: 0x0  nop
    ctx->pc = 0x1bdc0cu;
    // NOP
label_1bdc10:
    // 0x1bdc10: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x1bdc10u;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_1bdc14:
    // 0x1bdc14: 0xc0c493d  jal         func_3124F4
label_1bdc18:
    if (ctx->pc == 0x1BDC18u) {
        ctx->pc = 0x1BDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC14u;
        // 0x1bdc18: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC1Cu;
        goto label_1bdc1c;
    }
    ctx->pc = 0x1BDC14u;
    SET_GPR_U32(ctx, 31, 0x1BDC1Cu);
    ctx->pc = 0x1BDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC14u;
    // 0x1bdc18: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BDC14u, 0x1BDC1Cu)) {
        return;
    }
    ctx->pc = 0x1BDC1Cu;
label_1bdc1c:
    // 0x1bdc1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1bdc20:
    // 0x1bdc20: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1bdc24:
    // 0x1bdc24: 0x2467d5d0  addiu       $a3, $v1, -0x2A30
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_1bdc28:
    // 0x1bdc28: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1bdc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_1bdc2c:
    // 0x1bdc2c: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1bdc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_1bdc30:
    // 0x1bdc30: 0xaba40113  swl         $a0, 0x113($sp)
    ctx->pc = 0x1bdc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bdc34:
    // 0x1bdc34: 0xbba40110  swr         $a0, 0x110($sp)
    ctx->pc = 0x1bdc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bdc38:
    // 0x1bdc38: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1bdc38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1bdc3c:
    // 0x1bdc3c: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1bdc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1bdc40:
    // 0x1bdc40: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_1bdc44:
    if (ctx->pc == 0x1BDC44u) {
        ctx->pc = 0x1BDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC40u;
        // 0x1bdc44: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC48u;
        goto label_1bdc48;
    }
    ctx->pc = 0x1BDC40u;
    {
        const bool branch_taken_0x1bdc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC40u;
        // 0x1bdc44: 0xa3a20111  sb          $v0, 0x111($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc40) {
            ctx->pc = 0x1BDCC4u;
            goto label_1bdcc4;
        }
    }
    ctx->pc = 0x1BDC48u;
label_1bdc48:
    // 0x1bdc48: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1bdc4c:
    // 0x1bdc4c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1bdc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1bdc50:
    // 0x1bdc50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1bdc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1bdc54:
    // 0x1bdc54: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1bdc54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1bdc58:
    // 0x1bdc58: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_1bdc5c:
    if (ctx->pc == 0x1BDC5Cu) {
        ctx->pc = 0x1BDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC58u;
        // 0x1bdc5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC60u;
        goto label_1bdc60;
    }
    ctx->pc = 0x1BDC58u;
    {
        const bool branch_taken_0x1bdc58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC58u;
        // 0x1bdc5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc58) {
            ctx->pc = 0x1BDCB8u;
            goto label_1bdcb8;
        }
    }
    ctx->pc = 0x1BDC60u;
label_1bdc60:
    // 0x1bdc60: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bdc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bdc64:
    // 0x1bdc64: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1bdc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bdc68:
    // 0x1bdc68: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1bdc6c:
    // 0x1bdc6c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1bdc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bdc70:
    // 0x1bdc70: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1bdc70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_1bdc74:
    // 0x1bdc74: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x1bdc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bdc78:
    // 0x1bdc78: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x1bdc78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
label_1bdc7c:
    // 0x1bdc7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bdc7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bdc80:
    // 0x1bdc80: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1bdc80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1bdc84:
    // 0x1bdc84: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1bdc84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bdc88:
    // 0x1bdc88: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x1bdc88u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_1bdc8c:
    // 0x1bdc8c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1bdc8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1bdc90:
    // 0x1bdc90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bdc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdc94:
    // 0x1bdc94: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x1bdc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1bdc98:
    // 0x1bdc98: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1bdc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1bdc9c:
    // 0x1bdc9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bdc9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bdca0:
    // 0x1bdca0: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1bdca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_1bdca4:
    // 0x1bdca4: 0xc06ce2a  jal         func_1B38A8
label_1bdca8:
    if (ctx->pc == 0x1BDCA8u) {
        ctx->pc = 0x1BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCA4u;
        // 0x1bdca8: 0xc60e0010  lwc1        $f14, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCACu;
        goto label_1bdcac;
    }
    ctx->pc = 0x1BDCA4u;
    SET_GPR_U32(ctx, 31, 0x1BDCACu);
    ctx->pc = 0x1BDCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCA4u;
    // 0x1bdca8: 0xc60e0010  lwc1        $f14, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BDCA4u, 0x1BDCACu)) {
        return;
    }
    ctx->pc = 0x1BDCACu;
label_1bdcac:
    // 0x1bdcac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1bdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bdcb0:
    // 0x1bdcb0: 0xc06cff8  jal         func_1B3FE0
label_1bdcb4:
    if (ctx->pc == 0x1BDCB4u) {
        ctx->pc = 0x1BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCB0u;
        // 0x1bdcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCB8u;
        goto label_1bdcb8;
    }
    ctx->pc = 0x1BDCB0u;
    SET_GPR_U32(ctx, 31, 0x1BDCB8u);
    ctx->pc = 0x1BDCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCB0u;
    // 0x1bdcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BDCB0u, 0x1BDCB8u)) {
        return;
    }
    ctx->pc = 0x1BDCB8u;
label_1bdcb8:
    // 0x1bdcb8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bdcbc:
    // 0x1bdcbc: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
label_1bdcc0:
    if (ctx->pc == 0x1BDCC0u) {
        ctx->pc = 0x1BDCC4u;
        goto label_1bdcc4;
    }
    ctx->pc = 0x1BDCBCu;
    {
        const bool branch_taken_0x1bdcbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdcbc) {
            ctx->pc = 0x1BDC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdc58;
        }
    }
    ctx->pc = 0x1BDCC4u;
label_1bdcc4:
    // 0x1bdcc4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1bdcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1bdcc8:
    // 0x1bdcc8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1bdcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1bdccc:
    // 0x1bdccc: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1bdcccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1bdcd0:
    // 0x1bdcd0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1bdcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1bdcd4:
    // 0x1bdcd4: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1bdcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1bdcd8:
    // 0x1bdcd8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1bdcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bdcdc:
    // 0x1bdcdc: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1bdcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bdce0:
    // 0x1bdce0: 0x3e00008  jr          $ra
label_1bdce4:
    if (ctx->pc == 0x1BDCE4u) {
        ctx->pc = 0x1BDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCE0u;
        // 0x1bdce4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCE8u;
        goto label_fallthrough_0x1bdce0;
    }
    ctx->pc = 0x1BDCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCE0u;
        // 0x1bdce4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bdce0:
    ctx->pc = 0x1BDCE8u;
}
