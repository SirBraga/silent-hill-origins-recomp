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

// Function: sub_00175228
// Address: 0x175228 - 0x175378
void sub_00175228_0x175228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175228_0x175228");
#endif

    switch (ctx->pc) {
        case 0x175290u: goto label_175290;
        case 0x175298u: goto label_175298;
        case 0x1752e4u: goto label_1752e4;
        case 0x1752fcu: goto label_1752fc;
        case 0x175348u: goto label_175348;
        default: break;
    }

    ctx->pc = 0x175228u;

    // 0x175228: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17522c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x17522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x175230: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x175230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x175234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175238: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x175238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x17523c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17523cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x175240: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x175240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x175244: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x175248: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x175248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x17524c: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x175250: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x175250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x175254: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x175254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x175258: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x175258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x17525c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175264: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x175264u;
    {
        const bool branch_taken_0x175264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175264u;
        // 0x175268: 0x24a2fffc  addiu       $v0, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175264) {
            ctx->pc = 0x175348u;
            goto label_175348;
        }
    }
    ctx->pc = 0x17526Cu;
    // 0x17526c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17526cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175270: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x175270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x175274: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x175274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175278: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x175278u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x17527c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17527Cu;
    {
        const bool branch_taken_0x17527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17527Cu;
        // 0x175280: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17527c) {
            ctx->pc = 0x1752F0u;
            goto label_1752f0;
        }
    }
    ctx->pc = 0x175284u;
    // 0x175284: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x175288: 0x2650006c  addiu       $s0, $s2, 0x6C
    ctx->pc = 0x175288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x17528c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175290:
    // 0x175290: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x175290u;
    SET_GPR_U32(ctx, 31, 0x175298u);
    ctx->pc = 0x175294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175290u;
    // 0x175294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x175290u, 0x175298u)) {
        return;
    }
    ctx->pc = 0x175298u;
label_175298:
    // 0x175298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17529c: 0x8ea442e0  lw          $a0, 0x42E0($s5)
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17120)));
    // 0x1752a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1752a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1752a4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1752a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1752a8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1752a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1752ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1752b0: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x1752b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1752b4: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x1752b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1752b8: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x1752b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x1752bc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1752bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1752c0: 0xafbd0014  sw          $sp, 0x14($sp)
    ctx->pc = 0x1752c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
    // 0x1752c4: 0x8e621a70  lw          $v0, 0x1A70($s3)
    ctx->pc = 0x1752c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x1752c8: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1752C8u;
    {
        const bool branch_taken_0x1752c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1752c8) {
            ctx->pc = 0x1752CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1752C8u;
            // 0x1752cc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1752D0u;
    // 0x1752d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1752d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1752D4u;
    {
        const bool branch_taken_0x1752d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1752d4) {
            ctx->pc = 0x1752D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1752D4u;
            // 0x1752d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1752DCu;
    // 0x1752dc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1752DCu;
    SET_GPR_U32(ctx, 31, 0x1752E4u);
    ctx->pc = 0x1752E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752DCu;
    // 0x1752e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1752DCu, 0x1752E4u)) {
        return;
    }
    ctx->pc = 0x1752E4u;
label_1752e4:
    // 0x1752e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1752e8:
    // 0x1752e8: 0x621ffe9  bgez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1752E8u;
    {
        const bool branch_taken_0x1752e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1752ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752E8u;
        // 0x1752ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752e8) {
            ctx->pc = 0x175290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175290;
        }
    }
    ctx->pc = 0x1752F0u;
label_1752f0:
    // 0x1752f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752f4: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1752F4u;
    SET_GPR_U32(ctx, 31, 0x1752FCu);
    ctx->pc = 0x1752F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752F4u;
    // 0x1752f8: 0x2968021  addu        $s0, $s4, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1752F4u, 0x1752FCu)) {
        return;
    }
    ctx->pc = 0x1752FCu;
label_1752fc:
    // 0x1752fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1752fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175300: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x175300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x175304: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x175304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x175308: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x175308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17530c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x175310: 0xb3a3000b  sdl         $v1, 0xB($sp)
    ctx->pc = 0x175310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175314: 0xb7a30004  sdr         $v1, 0x4($sp)
    ctx->pc = 0x175314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175318: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x175318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x17531c: 0x8ee342d8  lw          $v1, 0x42D8($s7)
    ctx->pc = 0x17531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17112)));
    // 0x175320: 0xafbd0024  sw          $sp, 0x24($sp)
    ctx->pc = 0x175320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
    // 0x175324: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x175324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x175328: 0x8e621a70  lw          $v0, 0x1A70($s3)
    ctx->pc = 0x175328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x17532c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17532Cu;
    {
        const bool branch_taken_0x17532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x175330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17532Cu;
        // 0x175330: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17532c) {
            ctx->pc = 0x17534Cu;
            goto label_17534c;
        }
    }
    ctx->pc = 0x175334u;
    // 0x175334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175338u;
    {
        const bool branch_taken_0x175338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175338u;
        // 0x17533c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175338) {
            ctx->pc = 0x175350u;
            goto label_175350;
        }
    }
    ctx->pc = 0x175340u;
    // 0x175340: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x175340u;
    SET_GPR_U32(ctx, 31, 0x175348u);
    ctx->pc = 0x175344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175340u;
    // 0x175344: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x175340u, 0x175348u)) {
        return;
    }
    ctx->pc = 0x175348u;
label_175348:
    // 0x175348: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x175348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17534c:
    // 0x17534c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x17534cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_175350:
    // 0x175350: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x175350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x175354: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x175354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x175358: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x175358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17535c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17535cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x175360: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x175360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175364: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x175364u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17536c: 0x3e00008  jr          $ra
    ctx->pc = 0x17536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17536Cu;
        // 0x175370: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17536Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175374u;
    // 0x175374: 0x0  nop
    ctx->pc = 0x175374u;
    // NOP
    ctx->pc = 0x175378u;
}
