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

// Function: sub_002A4240
// Address: 0x2a4240 - 0x2a4328
void sub_002A4240_0x2a4240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4240_0x2a4240");
#endif

    switch (ctx->pc) {
        case 0x2a42a4u: goto label_2a42a4;
        case 0x2a4300u: goto label_2a4300;
        case 0x2a4314u: goto label_2a4314;
        default: break;
    }

    ctx->pc = 0x2a4240u;

    // 0x2a4240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a4244: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a4248: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a424c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a4250: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a4250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a4258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a425c: 0x2444e1d8  addiu       $a0, $v0, -0x1E28
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959576));
    // 0x2a4260: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a4264: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4264u;
    {
        const bool branch_taken_0x2a4264 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4264u;
        // 0x2a4268: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4264) {
            ctx->pc = 0x2A4298u;
            goto label_2a4298;
        }
    }
    ctx->pc = 0x2A426Cu;
    // 0x2a426c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2a426cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4270: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4274: 0xdc46e1d8  ld          $a2, -0x1E28($v0)
    ctx->pc = 0x2a4274u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294959576)));
    // 0x2a4278: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2a4278u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a427c: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x2a427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x2a4280: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a4284: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2a4284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2a4288: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2a4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x2a428c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4290: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x2a4290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x2a4294: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x2a4294u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_2a4298:
    // 0x2a4298: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a429c: 0xc0a8e7a  jal         func_2A39E8
    ctx->pc = 0x2A429Cu;
    SET_GPR_U32(ctx, 31, 0x2A42A4u);
    ctx->pc = 0x2A42A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A429Cu;
    // 0x2a42a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A39E8u, 0x2A429Cu, 0x2A42A4u)) {
        return;
    }
    ctx->pc = 0x2A42A4u;
label_2a42a4:
    // 0x2a42a4: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2a42a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a42a8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2a42ac: 0x24e3d868  addiu       $v1, $a3, -0x2798
    ctx->pc = 0x2a42acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957160));
    // 0x2a42b0: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x2a42b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2a42b4: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x2a42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x2a42b8: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x2a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2a42bc: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x2a42bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6AD870u));
    // 0x2a42c0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a42c4: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2a42c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a42c8: 0xdce5d868  ld          $a1, -0x2798($a3)
    ctx->pc = 0x2a42c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294957160)));
    // 0x2a42cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a42d0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x2a42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x2a42d4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2a42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2a42d8: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x2a42d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a42dc: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A42DCu;
    {
        const bool branch_taken_0x2a42dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42DCu;
        // 0x2a42e0: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42dc) {
            ctx->pc = 0x2A4300u;
            goto label_2a4300;
        }
    }
    ctx->pc = 0x2A42E4u;
    // 0x2a42e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a42e8: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x2a42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a42ec: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x2a42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x2a42f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A42F0u;
    {
        const bool branch_taken_0x2a42f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42F0u;
        // 0x2a42f4: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42f0) {
            ctx->pc = 0x2A4300u;
            goto label_2a4300;
        }
    }
    ctx->pc = 0x2A42F8u;
    // 0x2a42f8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x2A42F8u;
    SET_GPR_U32(ctx, 31, 0x2A4300u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x2A42F8u, 0x2A4300u)) {
        return;
    }
    ctx->pc = 0x2A4300u;
label_2a4300:
    // 0x2a4300: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a4304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4304u;
    {
        const bool branch_taken_0x2a4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4304u;
        // 0x2a4308: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4304) {
            ctx->pc = 0x2A4318u;
            goto label_2a4318;
        }
    }
    ctx->pc = 0x2A430Cu;
    // 0x2a430c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2A430Cu;
    SET_GPR_U32(ctx, 31, 0x2A4314u);
    ctx->pc = 0x2A4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A430Cu;
    // 0x2a4310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2A430Cu, 0x2A4314u)) {
        return;
    }
    ctx->pc = 0x2A4314u;
label_2a4314:
    // 0x2a4314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4318:
    // 0x2a4318: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a4318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a431c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a431cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4320: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4320u;
        // 0x2a4324: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4328u;
}
