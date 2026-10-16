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

// Function: sub_001AACE8
// Address: 0x1aace8 - 0x1aaea0
void sub_001AACE8_0x1aace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AACE8_0x1aace8");
#endif

    switch (ctx->pc) {
        case 0x1aace8u: goto label_1aace8;
        case 0x1aacecu: goto label_1aacec;
        case 0x1aacf0u: goto label_1aacf0;
        case 0x1aacf4u: goto label_1aacf4;
        case 0x1aacf8u: goto label_1aacf8;
        case 0x1aacfcu: goto label_1aacfc;
        case 0x1aad00u: goto label_1aad00;
        case 0x1aad04u: goto label_1aad04;
        case 0x1aad08u: goto label_1aad08;
        case 0x1aad0cu: goto label_1aad0c;
        case 0x1aad10u: goto label_1aad10;
        case 0x1aad14u: goto label_1aad14;
        case 0x1aad18u: goto label_1aad18;
        case 0x1aad1cu: goto label_1aad1c;
        case 0x1aad20u: goto label_1aad20;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad28u: goto label_1aad28;
        case 0x1aad2cu: goto label_1aad2c;
        case 0x1aad30u: goto label_1aad30;
        case 0x1aad34u: goto label_1aad34;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad3cu: goto label_1aad3c;
        case 0x1aad40u: goto label_1aad40;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad48u: goto label_1aad48;
        case 0x1aad4cu: goto label_1aad4c;
        case 0x1aad50u: goto label_1aad50;
        case 0x1aad54u: goto label_1aad54;
        case 0x1aad58u: goto label_1aad58;
        case 0x1aad5cu: goto label_1aad5c;
        case 0x1aad60u: goto label_1aad60;
        case 0x1aad64u: goto label_1aad64;
        case 0x1aad68u: goto label_1aad68;
        case 0x1aad6cu: goto label_1aad6c;
        case 0x1aad70u: goto label_1aad70;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad78u: goto label_1aad78;
        case 0x1aad7cu: goto label_1aad7c;
        case 0x1aad80u: goto label_1aad80;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad88u: goto label_1aad88;
        case 0x1aad8cu: goto label_1aad8c;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aad94u: goto label_1aad94;
        case 0x1aad98u: goto label_1aad98;
        case 0x1aad9cu: goto label_1aad9c;
        case 0x1aada0u: goto label_1aada0;
        case 0x1aada4u: goto label_1aada4;
        case 0x1aada8u: goto label_1aada8;
        case 0x1aadacu: goto label_1aadac;
        case 0x1aadb0u: goto label_1aadb0;
        case 0x1aadb4u: goto label_1aadb4;
        case 0x1aadb8u: goto label_1aadb8;
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadc4u: goto label_1aadc4;
        case 0x1aadc8u: goto label_1aadc8;
        case 0x1aadccu: goto label_1aadcc;
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadd8u: goto label_1aadd8;
        case 0x1aaddcu: goto label_1aaddc;
        case 0x1aade0u: goto label_1aade0;
        case 0x1aade4u: goto label_1aade4;
        case 0x1aade8u: goto label_1aade8;
        case 0x1aadecu: goto label_1aadec;
        case 0x1aadf0u: goto label_1aadf0;
        case 0x1aadf4u: goto label_1aadf4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aadfcu: goto label_1aadfc;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae04u: goto label_1aae04;
        case 0x1aae08u: goto label_1aae08;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae10u: goto label_1aae10;
        case 0x1aae14u: goto label_1aae14;
        case 0x1aae18u: goto label_1aae18;
        case 0x1aae1cu: goto label_1aae1c;
        case 0x1aae20u: goto label_1aae20;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae28u: goto label_1aae28;
        case 0x1aae2cu: goto label_1aae2c;
        case 0x1aae30u: goto label_1aae30;
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae38u: goto label_1aae38;
        case 0x1aae3cu: goto label_1aae3c;
        case 0x1aae40u: goto label_1aae40;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae4cu: goto label_1aae4c;
        case 0x1aae50u: goto label_1aae50;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        default: break;
    }

    ctx->pc = 0x1aace8u;

label_1aace8:
    // 0x1aace8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1aacec:
    // 0x1aacec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1aacecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1aacf0:
    // 0x1aacf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1aacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1aacf4:
    // 0x1aacf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aacf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aacf8:
    // 0x1aacf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aacfc:
    // 0x1aacfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aacfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aad00:
    // 0x1aad00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1aad00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1aad04:
    // 0x1aad04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1aad04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1aad08:
    // 0x1aad08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aad0c:
    // 0x1aad0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1aad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1aad10:
    // 0x1aad10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aad14:
    // 0x1aad14: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1aad14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1aad18:
    // 0x1aad18: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1aad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1aad1c:
    // 0x1aad1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1aad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1aad20:
    // 0x1aad20: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x1aad20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aad24:
    // 0x1aad24: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x1aad24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aad28:
    // 0x1aad28: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1aad28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1aad2c:
    // 0x1aad2c: 0x8e021200  lw          $v0, 0x1200($s0)
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_1aad30:
    // 0x1aad30: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1aad34:
    if (ctx->pc == 0x1AAD34u) {
        ctx->pc = 0x1AAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD30u;
        // 0x1aad34: 0x26530020  addiu       $s3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD38u;
        goto label_1aad38;
    }
    ctx->pc = 0x1AAD30u;
    {
        const bool branch_taken_0x1aad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD30u;
        // 0x1aad34: 0x26530020  addiu       $s3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad30) {
            ctx->pc = 0x1AADACu;
            goto label_1aadac;
        }
    }
    ctx->pc = 0x1AAD38u;
label_1aad38:
    // 0x1aad38: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1aad3c:
    // 0x1aad3c: 0xc06a4b2  jal         func_1A92C8
label_1aad40:
    if (ctx->pc == 0x1AAD40u) {
        ctx->pc = 0x1AAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD3Cu;
        // 0x1aad40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD44u;
        goto label_1aad44;
    }
    ctx->pc = 0x1AAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD44u);
    ctx->pc = 0x1AAD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD3Cu;
    // 0x1aad40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A92C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A92C8u, 0x1AAD3Cu, 0x1AAD44u)) {
        return;
    }
    ctx->pc = 0x1AAD44u;
label_1aad44:
    // 0x1aad44: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_1aad48:
    if (ctx->pc == 0x1AAD48u) {
        ctx->pc = 0x1AAD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD44u;
        // 0x1aad48: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD4Cu;
        goto label_1aad4c;
    }
    ctx->pc = 0x1AAD44u;
    {
        const bool branch_taken_0x1aad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aad44) {
            ctx->pc = 0x1AAD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAD44u;
            // 0x1aad48: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAE80u;
            goto label_1aae80;
        }
    }
    ctx->pc = 0x1AAD4Cu;
label_1aad4c:
    // 0x1aad4c: 0xc06a4b4  jal         func_1A92D0
label_1aad50:
    if (ctx->pc == 0x1AAD50u) {
        ctx->pc = 0x1AAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD4Cu;
        // 0x1aad50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD54u;
        goto label_1aad54;
    }
    ctx->pc = 0x1AAD4Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD54u);
    ctx->pc = 0x1AAD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD4Cu;
    // 0x1aad50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A92D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A92D0u, 0x1AAD4Cu, 0x1AAD54u)) {
        return;
    }
    ctx->pc = 0x1AAD54u;
label_1aad54:
    // 0x1aad54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aad58:
    // 0x1aad58: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1aad5c:
    if (ctx->pc == 0x1AAD5Cu) {
        ctx->pc = 0x1AAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD58u;
        // 0x1aad5c: 0xae050160  sw          $a1, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD60u;
        goto label_1aad60;
    }
    ctx->pc = 0x1AAD58u;
    {
        const bool branch_taken_0x1aad58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD58u;
        // 0x1aad5c: 0xae050160  sw          $a1, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad58) {
            ctx->pc = 0x1AAD80u;
            goto label_1aad80;
        }
    }
    ctx->pc = 0x1AAD60u;
label_1aad60:
    // 0x1aad60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aad64:
    // 0x1aad64: 0xae001204  sw          $zero, 0x1204($s0)
    ctx->pc = 0x1aad64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 0));
label_1aad68:
    // 0x1aad68: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x1aad68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
label_1aad6c:
    // 0x1aad6c: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1aad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_1aad70:
    // 0x1aad70: 0xc06b018  jal         func_1AC060
label_1aad74:
    if (ctx->pc == 0x1AAD74u) {
        ctx->pc = 0x1AAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD70u;
        // 0x1aad74: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD78u;
        goto label_1aad78;
    }
    ctx->pc = 0x1AAD70u;
    SET_GPR_U32(ctx, 31, 0x1AAD78u);
    ctx->pc = 0x1AAD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD70u;
    // 0x1aad74: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AC060u, 0x1AAD70u, 0x1AAD78u)) {
        return;
    }
    ctx->pc = 0x1AAD78u;
label_1aad78:
    // 0x1aad78: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aad7c:
    if (ctx->pc == 0x1AAD7Cu) {
        ctx->pc = 0x1AAD80u;
        goto label_1aad80;
    }
    ctx->pc = 0x1AAD78u;
    {
        const bool branch_taken_0x1aad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aad78) {
            ctx->pc = 0x1AAD90u;
            goto label_1aad90;
        }
    }
    ctx->pc = 0x1AAD80u;
label_1aad80:
    // 0x1aad80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aad84:
    // 0x1aad84: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aad84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1aad88:
    // 0x1aad88: 0xae021204  sw          $v0, 0x1204($s0)
    ctx->pc = 0x1aad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 2));
label_1aad8c:
    // 0x1aad8c: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x1aad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
label_1aad90:
    // 0x1aad90: 0xc06a7c4  jal         func_1A9F10
label_1aad94:
    if (ctx->pc == 0x1AAD94u) {
        ctx->pc = 0x1AAD98u;
        goto label_1aad98;
    }
    ctx->pc = 0x1AAD90u;
    SET_GPR_U32(ctx, 31, 0x1AAD98u);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1AAD90u, 0x1AAD98u)) {
        return;
    }
    ctx->pc = 0x1AAD98u;
label_1aad98:
    // 0x1aad98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aad9c:
    // 0x1aad9c: 0xc06a858  jal         func_1AA160
label_1aada0:
    if (ctx->pc == 0x1AADA0u) {
        ctx->pc = 0x1AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD9Cu;
        // 0x1aada0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADA4u;
        goto label_1aada4;
    }
    ctx->pc = 0x1AAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1AADA4u);
    ctx->pc = 0x1AADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD9Cu;
    // 0x1aada0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA160u, 0x1AAD9Cu, 0x1AADA4u)) {
        return;
    }
    ctx->pc = 0x1AADA4u;
label_1aada4:
    // 0x1aada4: 0x10000036  b           . + 4 + (0x36 << 2)
label_1aada8:
    if (ctx->pc == 0x1AADA8u) {
        ctx->pc = 0x1AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADA4u;
        // 0x1aada8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADACu;
        goto label_1aadac;
    }
    ctx->pc = 0x1AADA4u;
    {
        const bool branch_taken_0x1aada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADA4u;
        // 0x1aada8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aada4) {
            ctx->pc = 0x1AAE80u;
            goto label_1aae80;
        }
    }
    ctx->pc = 0x1AADACu;
label_1aadac:
    // 0x1aadac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1aadacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aadb0:
    // 0x1aadb0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1aadb4:
    if (ctx->pc == 0x1AADB4u) {
        ctx->pc = 0x1AADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADB0u;
        // 0x1aadb4: 0x26110170  addiu       $s1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADB8u;
        goto label_1aadb8;
    }
    ctx->pc = 0x1AADB0u;
    {
        const bool branch_taken_0x1aadb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADB0u;
        // 0x1aadb4: 0x26110170  addiu       $s1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadb0) {
            ctx->pc = 0x1AAE7Cu;
            goto label_1aae7c;
        }
    }
    ctx->pc = 0x1AADB8u;
label_1aadb8:
    // 0x1aadb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aadb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aadbc:
    // 0x1aadbc: 0xc06ae46  jal         func_1AB918
label_1aadc0:
    if (ctx->pc == 0x1AADC0u) {
        ctx->pc = 0x1AADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADBCu;
        // 0x1aadc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADC4u;
        goto label_1aadc4;
    }
    ctx->pc = 0x1AADBCu;
    SET_GPR_U32(ctx, 31, 0x1AADC4u);
    ctx->pc = 0x1AADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADBCu;
    // 0x1aadc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB918u, 0x1AADBCu, 0x1AADC4u)) {
        return;
    }
    ctx->pc = 0x1AADC4u;
label_1aadc4:
    // 0x1aadc4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1aadc8:
    if (ctx->pc == 0x1AADC8u) {
        ctx->pc = 0x1AADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC4u;
        // 0x1aadc8: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADCCu;
        goto label_1aadcc;
    }
    ctx->pc = 0x1AADC4u;
    {
        const bool branch_taken_0x1aadc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC4u;
        // 0x1aadc8: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadc4) {
            ctx->pc = 0x1AAE30u;
            goto label_1aae30;
        }
    }
    ctx->pc = 0x1AADCCu;
label_1aadcc:
    // 0x1aadcc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1aadccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1aadd0:
    // 0x1aadd0: 0xae201078  sw          $zero, 0x1078($s1)
    ctx->pc = 0x1aadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4216), GPR_U32(ctx, 0));
label_1aadd4:
    // 0x1aadd4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1aadd8:
    // 0x1aadd8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1aadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1aaddc:
    // 0x1aaddc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1aade0:
    if (ctx->pc == 0x1AADE0u) {
        ctx->pc = 0x1AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADDCu;
        // 0x1aade0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADE4u;
        goto label_1aade4;
    }
    ctx->pc = 0x1AADDCu;
    {
        const bool branch_taken_0x1aaddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADDCu;
        // 0x1aade0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaddc) {
            ctx->pc = 0x1AAE14u;
            goto label_1aae14;
        }
    }
    ctx->pc = 0x1AADE4u;
label_1aade4:
    // 0x1aade4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1aade4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aade8:
    // 0x1aade8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1aade8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aadec:
    // 0x1aadec: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1aadecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aadf0:
    // 0x1aadf0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1aadf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1aadf4:
    // 0x1aadf4: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1aadf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aadf8:
    // 0x1aadf8: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1aadf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aadfc:
    // 0x1aadfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1aae00:
    // 0x1aae00: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1aae00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_1aae04:
    // 0x1aae04: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1aae08:
    // 0x1aae08: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1aae08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aae0c:
    // 0x1aae0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1aae10:
    if (ctx->pc == 0x1AAE10u) {
        ctx->pc = 0x1AAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE0Cu;
        // 0x1aae10: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE14u;
        goto label_1aae14;
    }
    ctx->pc = 0x1AAE0Cu;
    {
        const bool branch_taken_0x1aae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE0Cu;
        // 0x1aae10: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae0c) {
            ctx->pc = 0x1AADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aade8;
        }
    }
    ctx->pc = 0x1AAE14u;
label_1aae14:
    // 0x1aae14: 0xc06a928  jal         func_1AA4A0
label_1aae18:
    if (ctx->pc == 0x1AAE18u) {
        ctx->pc = 0x1AAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE14u;
        // 0x1aae18: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE1Cu;
        goto label_1aae1c;
    }
    ctx->pc = 0x1AAE14u;
    SET_GPR_U32(ctx, 31, 0x1AAE1Cu);
    ctx->pc = 0x1AAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE14u;
    // 0x1aae18: 0xaca00080  sw          $zero, 0x80($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AAE14u, 0x1AAE1Cu)) {
        return;
    }
    ctx->pc = 0x1AAE1Cu;
label_1aae1c:
    // 0x1aae1c: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x1aae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1aae20:
    // 0x1aae20: 0xc06a9a4  jal         func_1AA690
label_1aae24:
    if (ctx->pc == 0x1AAE24u) {
        ctx->pc = 0x1AAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE20u;
        // 0x1aae24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE28u;
        goto label_1aae28;
    }
    ctx->pc = 0x1AAE20u;
    SET_GPR_U32(ctx, 31, 0x1AAE28u);
    ctx->pc = 0x1AAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE20u;
    // 0x1aae24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA690u, 0x1AAE20u, 0x1AAE28u)) {
        return;
    }
    ctx->pc = 0x1AAE28u;
label_1aae28:
    // 0x1aae28: 0x10000014  b           . + 4 + (0x14 << 2)
label_1aae2c:
    if (ctx->pc == 0x1AAE2Cu) {
        ctx->pc = 0x1AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE28u;
        // 0x1aae2c: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE30u;
        goto label_1aae30;
    }
    ctx->pc = 0x1AAE28u;
    {
        const bool branch_taken_0x1aae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE28u;
        // 0x1aae2c: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae28) {
            ctx->pc = 0x1AAE7Cu;
            goto label_1aae7c;
        }
    }
    ctx->pc = 0x1AAE30u;
label_1aae30:
    // 0x1aae30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1aae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aae34:
    // 0x1aae34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1aae38:
    if (ctx->pc == 0x1AAE38u) {
        ctx->pc = 0x1AAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE34u;
        // 0x1aae38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE3Cu;
        goto label_1aae3c;
    }
    ctx->pc = 0x1AAE34u;
    {
        const bool branch_taken_0x1aae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE34u;
        // 0x1aae38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae34) {
            ctx->pc = 0x1AAE7Cu;
            goto label_1aae7c;
        }
    }
    ctx->pc = 0x1AAE3Cu;
label_1aae3c:
    // 0x1aae3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1aae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1aae40:
    // 0x1aae40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aae44:
    // 0x1aae44: 0x40f809  jalr        $v0
label_1aae48:
    if (ctx->pc == 0x1AAE48u) {
        ctx->pc = 0x1AAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE44u;
        // 0x1aae48: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE4Cu;
        goto label_1aae4c;
    }
    ctx->pc = 0x1AAE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAE4Cu);
        ctx->pc = 0x1AAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE44u;
        // 0x1aae48: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE44u, 0x1AAE4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAE4Cu;
label_1aae4c:
    // 0x1aae4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aae4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aae50:
    // 0x1aae50: 0xc06ad74  jal         func_1AB5D0
label_1aae54:
    if (ctx->pc == 0x1AAE54u) {
        ctx->pc = 0x1AAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE50u;
        // 0x1aae54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE58u;
        goto label_1aae58;
    }
    ctx->pc = 0x1AAE50u;
    SET_GPR_U32(ctx, 31, 0x1AAE58u);
    ctx->pc = 0x1AAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE50u;
    // 0x1aae54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB5D0u, 0x1AAE50u, 0x1AAE58u)) {
        return;
    }
    ctx->pc = 0x1AAE58u;
label_1aae58:
    // 0x1aae58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aae58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aae5c:
    // 0x1aae5c: 0xc06ada2  jal         func_1AB688
label_1aae60:
    if (ctx->pc == 0x1AAE60u) {
        ctx->pc = 0x1AAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE5Cu;
        // 0x1aae60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE64u;
        goto label_1aae64;
    }
    ctx->pc = 0x1AAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE64u);
    ctx->pc = 0x1AAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE5Cu;
    // 0x1aae60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB688u, 0x1AAE5Cu, 0x1AAE64u)) {
        return;
    }
    ctx->pc = 0x1AAE64u;
label_1aae64:
    // 0x1aae64: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1aae64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1aae68:
    // 0x1aae68: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1aae68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1aae6c:
    // 0x1aae6c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1aae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1aae70:
    // 0x1aae70: 0xb2430027  sdl         $v1, 0x27($s2)
    ctx->pc = 0x1aae70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aae74:
    // 0x1aae74: 0xb6430020  sdr         $v1, 0x20($s2)
    ctx->pc = 0x1aae74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aae78:
    // 0x1aae78: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x1aae78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
label_1aae7c:
    // 0x1aae7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1aae7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aae80:
    // 0x1aae80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aae84:
    // 0x1aae84: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1aae84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aae88:
    // 0x1aae88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1aae88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aae8c:
    // 0x1aae8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aae8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aae90:
    // 0x1aae90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aae94:
    // 0x1aae94: 0x3e00008  jr          $ra
label_1aae98:
    if (ctx->pc == 0x1AAE98u) {
        ctx->pc = 0x1AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE94u;
        // 0x1aae98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE9Cu;
        goto label_1aae9c;
    }
    ctx->pc = 0x1AAE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE94u;
        // 0x1aae98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE9Cu;
label_1aae9c:
    // 0x1aae9c: 0x0  nop
    ctx->pc = 0x1aae9cu;
    // NOP
    ctx->pc = 0x1aaea0u;
}
