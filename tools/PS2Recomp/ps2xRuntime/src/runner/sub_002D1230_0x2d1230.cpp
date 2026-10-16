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

// Function: sub_002D1230
// Address: 0x2d1230 - 0x2d12b0
void sub_002D1230_0x2d1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1230_0x2d1230");
#endif

    switch (ctx->pc) {
        case 0x2d1268u: goto label_2d1268;
        case 0x2d1290u: goto label_2d1290;
        default: break;
    }

    ctx->pc = 0x2d1230u;

    // 0x2d1230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1234: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d1238: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d123c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d123cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1240: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2d1240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d1244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1248: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d124c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d124cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d1254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1258: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x2d1258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2d125c: 0x2607010c  addiu       $a3, $s0, 0x10C
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x2d1260: 0xc0b434c  jal         func_2D0D30
    ctx->pc = 0x2D1260u;
    SET_GPR_U32(ctx, 31, 0x2D1268u);
    ctx->pc = 0x2D1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1260u;
    // 0x2d1264: 0x26080110  addiu       $t0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D0D30u, 0x2D1260u, 0x2D1268u)) {
        return;
    }
    ctx->pc = 0x2D1268u;
label_2d1268:
    // 0x2d1268: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1268u;
    {
        const bool branch_taken_0x2d1268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1268u;
        // 0x2d126c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1268) {
            ctx->pc = 0x2D1294u;
            goto label_2d1294;
        }
    }
    ctx->pc = 0x2D1270u;
    // 0x2d1270: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x2d1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1274: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d1274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1278: 0x0  nop
    ctx->pc = 0x2d1278u;
    // NOP
    // 0x2d127c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D127Cu;
    {
        const bool branch_taken_0x2d127c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D127Cu;
        // 0x2d1280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d127c) {
            ctx->pc = 0x2D1294u;
            goto label_2d1294;
        }
    }
    ctx->pc = 0x2D1284u;
    // 0x2d1284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1288: 0xc0b1a32  jal         func_2C68C8
    ctx->pc = 0x2D1288u;
    SET_GPR_U32(ctx, 31, 0x2D1290u);
    ctx->pc = 0x2D128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1288u;
    // 0x2d128c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C68C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C68C8u, 0x2D1288u, 0x2D1290u)) {
        return;
    }
    ctx->pc = 0x2D1290u;
label_2d1290:
    // 0x2d1290: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d1290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d1294:
    // 0x2d1294: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d1294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d1298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d129c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d129cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d12a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d12a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d12a4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d12a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D12A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12A8u;
        // 0x2d12ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D12A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D12B0u;
}
